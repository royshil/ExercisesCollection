# MNIST Classifier

Download and extract the MNIST dataset: http://yann.lecun.com/exdb/mnist/

Your goal is to write a simple classifier over this canonical dataset.

The classifier may be implemented using any machine learning construct at your disposal. 
However for a straight forward and simple implementation you may choose an SVM using all the pixels as the feature vector.

This exercise uses OpenCV for an imaging and machine learning library, however you are free to replace it for something else at your discretion.

### Bonus points
* Achieve sub 1% accuracy.
* Integrate a non-trivial feature, e.g. shape descriptor.

### Files
The files `MNISTClassifier.h` and `MNISTClassifier.cpp` are a barebones template for your work.
Feel free to make any change to the API.

The file `main.cpp` should be the entry point to your executable that performs some part of the classification work (build the classifier, run it over the test dataset, etc.)

### Coding styleguide
Please write *clean and readable code*:
* Use proper indentation, with spaces rather than tabs.
* Always use curly brackets, for `if`s, `for`s, `while`s and everything else. No "orphan" statements, please.
* Add spaces between operators, e.g. `a * b`.
* Document methods and classes, both with inline comments and doxygen-esque documentation.
* Use meaningful variable names. No single-character var names, please.
* Split large functions to smaller, simpler chunks and DRY.
* Avoid deeply nested `if`s and `for`s.
* Do not leave code commented out.
* Properly note the author and the date of file modification in the top of the source file.

There is a standard `Makefile` for you to use for compiling. It assumes a Unix-like OS.