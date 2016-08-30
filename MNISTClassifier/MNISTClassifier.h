/*
 * MNISTClassifier.h
 *
 *  Created on: Aug 30, 2016
 *      Author: roy_shilkrot
 */

#ifndef MNISTCLASSIFIER_H_
#define MNISTCLASSIFIER_H_

#include <string>

#include <opencv2/core/core.hpp>

struct MNISTDataset {
	//TODO: add data fields as nessecary
	//e.g. std::vector<cv::Mat> images;
	//     std::vector<int>     labels;
};

class MNISTClassifier {
public:
	MNISTClassifier(const MNISTDataset& trainDataset);
	virtual ~MNISTClassifier();

	/**
	 * Classify a single sample image.
	 *
	 * @param sample The sample to classify.
	 * @returns A class ID.
	 */
	int classifyImage(const cv::Mat& sample);

	/**
	 * Run the classifier over the test dataset and print out relevant statistics.
	 */
	void runTestDatasetAndPrintStats(const MNISTDataset& inputDataset);

	/**
	 * Load the MNIST dataset from the labels and images files, as described in the bottom of:
	 * http://yann.lecun.com/exdb/mnist/
	 *
	 * @param labelsFile The labels file.
	 * @param imagesFile The images file.
	 * @returns The MNIST dataset struct populated.
	 */
	static MNISTDataset loadDatasetFromFiles(const std::string& labelsFile, const std::string& imagesFile);

private:
	//... add member variables here
};

#endif /* MNISTCLASSIFIER_H_ */
