/*
 * main.cpp
 *
 *  Created on: Oct 6, 2016
 *      Author: roy_shilkrot
 */

#include "IntelligentScissors.h"

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

int main(int argc, char** argv) {
	Mat image = imread("input.jpg");

	IntelligentScissors segmenter(image);
	segmenter.segment();
}

