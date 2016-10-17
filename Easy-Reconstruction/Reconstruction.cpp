/*
 * Reconstruction.cpp
 *
 *  Created on: Oct 17, 2016
 *      Author: roy_shilkrot
 */

#include "Reconstruction.h"

Reconstruction::Reconstruction(const cv::Mat& inputLeft,
        const cv::Mat& inputRight) {
}

Reconstruction::~Reconstruction() {
}

void Reconstruction::reconstruct() {
    //Hint: extract 2D features, match, recover camera poses, prune features, triangulate 2D features matching to 3D points.
}

void Reconstruction::saveResultToFile(const std::string& filename) {
}
