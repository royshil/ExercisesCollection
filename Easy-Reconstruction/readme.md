# 3D Reconstruction - Easy

Your goal is to write a simple 3D reconstruction pipeline from a stereo view.

Download (at least) two images from one of the Dense MVS datasets: http://cvlabwww.epfl.ch/data/multiview/denseMVS.html
(e.g. the fountain dataset http://cvlabwww.epfl.ch/data/multiview/fountain_dense.html). Keep only the two images you would like to work on, and keep in mind the limits of stereo matching (if images are very far from each other there may be very little matching keypoints). 

Your task, should you choose to accept it, is to implement a sparse 3D reconstruction pipeline by extracting and matching 2D features in the two images.

This exercise assumes OpenCV will be used for an imaging and machine learning library, however you are free to replace it for something else at your discretion. However, if you will be using OpenCV (3.x) the following functions should probably be used in the reconstruction process:

* `findEssentialMat`
* `recoverPose`
* `triangulatePoints`
* `projectPoints`
* `undistortPoints`
* `convertPointsFromHomogeneous` and `convertPointsToHomogeneous`

For feature extarction just pick a standard detector, such as `ORB`.

Output your result into a simple XYZ point cloud file (where every line is simply `<x> <y> <z>`).

### Bonus points
* Implement a more dense reconstruction with Optical Flow. 
* Add more than 2 views to the reconstruction.
* Output the results into XYZRGB file adding color from the images to the points, and also output the camera positions.

### Files
The files `Reconstruction.h` and `Reconstruction.cpp` are a barebones template for your work.
Feel free to make any change to the API.

The file `main.cpp` should be the entry point to your executable that performs the reconstruction work.

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
