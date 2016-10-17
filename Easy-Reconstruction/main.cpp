/*
 * main.cpp
 *
 *  Created on: Oct 17, 2016
 *      Author: roy_shilkrot
 */

#include "Reconstruction.h"

#include <opencv2/core/core.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main(int argc, char** argv) {
	Mat imageLeft  = imread("input-left.jpg");
	Mat imageRight = imread("input-right.jpg");

	Reconstruction reconstruction(imageLeft, imageRight);
	reconstruction.reconstruct();
}

