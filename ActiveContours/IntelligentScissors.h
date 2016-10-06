/*
 * IntelligentScissors.h
 *
 *  Created on: Oct 6, 2016
 *      Author: roy_shilkrot
 */

#ifndef INTELLIGENTSCISSORS_H_
#define INTELLIGENTSCISSORS_H_

#include <opencv2/core/core.hpp>

class IntelligentScissors {
public:
	IntelligentScissors(const cv::Mat& input);
	virtual ~IntelligentScissors();

	/**
	 * Segment the object from the background.
	 * Optionally, make this an interactive function that displays a UI for the user to make markings on the image.
	 * Otherwise, this function will need a set of seed points as a parameter (e.g. `const vector<Point2f>& seeds`)
	 */
	void segment();

private:
	/**
	 * Preprocess the input image to prepare for interaction.
	 * Hint: Calculate the zero-crossings, gradient magnitudes and gradient directions.
	 */
	void preprocess();
};

#endif /* INTELLIGENTSCISSORS_H_ */
