# Active Contours Segmenter - Moderate

Your goal is to write a simple 2D active contours segmenter.
Active Contours was suggested circa 1987 by Kass, Witkin and Terzopoulos [1], at the time called "Snakes". However since then many similar methods were suggested. One particularly interesting one, for it's simplicity, is the "Intelligent Scissors" by Mortensen and Barrett [2].

Your task, should you choose to accept it, is to implement the vanilla version of the Intelligent Scissors work. 
In [2] you are best to read the entirety of section 3, however reading just 3.1 and 3.2 should set you on a clear path for implementation (pay close attention to their provided algorithm). Sub-section 3.4 suggest a rudimentary UI for the segmenter, which you may want to implement too.

This exercise assumes OpenCV will be used for an imaging and machine learning library, however you are free to replace it for something else at your discretion.

For images to segment you can use the Berkley 500 segmentation dataset: https://www2.eecs.berkeley.edu/Research/Projects/CS/vision/grouping/resources.html

### Bonus points
* Implement sub-section 3.4 form [2] to introduce "path cooling", which improves the interactivity of the tool.
* Implement sub-section 3.5 from [2] to help with ambiguous edges.
* Big bonus: Write your Intelligent Scissor tool as a plug-in for GIMP [3].

### Files
The files `IntelligentScissors.h` and `IntelligentScissors.cpp` are a barebones template for your work.
Feel free to make any change to the API.

The file `main.cpp` should be the entry point to your executable that performs the segmentation work.

### Coding styleguide
Please write *clean and readable code*:
* Use proper indentation, with spaces rather than tabs.
* Always use curly brackets, for `if`s, `for`s, `while`s and everything else. No "orphan" statements, please.
* Add spaces between operators, e.g. `a * b`.
* Document methods and classes, both with inline comments and doxygen-esque documentation.
* Use meaningful variable names. No single-character var names, please.
* Split large functions to smaller, simpler chunks and [DRY](https://en.wikipedia.org/wiki/Don%27t_repeat_yourself).
* Avoid deeply nested `if`s and `for`s.
* Prefer C++11 features, e.g. using `and` over `&&`, smart `for`s: `for (int it : vector)`, using `auto`s, etc. 
* Do not leave code commented out.
* Properly note the author and the date of file modification in the top of the source file.

There is a standard `Makefile` for you to use for compiling. It assumes a Unix-like OS.

[1] Kass, Michael, Andrew Witkin, and Demetri Terzopoulos. "Snakes: Active contour models." International journal of computer vision 1.4 (1988): 321-331.

[2] Eric N. Mortensen and William A. Barrett. 1995. Intelligent scissors for image composition. In Proceedings of the 22nd annual conference on Computer graphics and interactive techniques (SIGGRAPH '95) http://dl.acm.org/citation.cfm?id=218442

[3] GIMP plugins: http://wiki.gimp.org/wiki/Hacking:Plugins