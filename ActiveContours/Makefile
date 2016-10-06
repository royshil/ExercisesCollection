#Makefile
# Created on: Aug 30, 2016
#     Author: roy_shilkrot
#
# Adapted from http://blog.toonormal.com/2013/05/11/barebones-useful-generic-makefile/

TARGET_FILE     :=  IntelligentScissors
SRC_FILES       :=  IntelligentScissors.cpp main.cpp
LIBRARY_FILES   :=  -lopencv_core -lopencv_ml -lopencv_highgui -lopencv_imgproc
SRC_FILE_TYPES  :=  .c .cpp

FLAGS           :=  --std=c++11 -I/usr/local/include
C_FLAGS         :=  $(FLAGS)
CPP_FLAGS       :=  $(FLAGS)
LD_FLAGS        :=
CC              :=  gcc
CXX             :=  g++
LD              :=  $(CXX)


OUTPUT_DIR      :=  output/
OBJ_DIR         :=  obj/
TARGET          :=  $(OUTPUT_DIR)$(TARGET_FILE)
O_FILES         :=  $(addprefix $(OBJ_DIR),$(addsuffix .o,$(SRC_FILES)))
O_DIRS          :=  $(sort $(dir $(O_FILES)))

# Link Command #
$(TARGET): _makedirs $(O_FILES)
	$(LD) $(LD_FLAGS) $(O_FILES) $(LIBRARY_FILES) -o $@

# Compile Commands #
$(OBJ_DIR)%.cpp.o: %.cpp
	$(CXX) -c $(DEFINES) $(INCLUDE_DIRS) $(CPP_FLAGS) $< -o $@
	
all: $(TARGET)

_makedirs:
	mkdir -p $(O_DIRS) $(OUTPUT_DIR)

clean:
	rm -fr $(OBJ_DIR) $(OUTPUT_DIR)

info:
	@echo TARGET_FILE: $(TARGET_FILE) [$(TARGET)]
	@echo
	@echo SRC_FILES: $(SRC_FILES)
	@echo
	@echo O_FILES: $(O_FILES)
	@echo
	@echo O_DIRS: $(O_DIRS)

.PHONY: _makedirs clean info
