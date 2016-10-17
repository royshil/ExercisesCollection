/*
 * Reconstruction.h
 *
 *  Created on: Oct 17, 2016
 *      Author: roy_shilkrot
 */

#ifndef RECONSTRUCTION_H_
#define RECONSTRUCTION_H_

#include <opencv2/core/core.hpp>

class Reconstruction {
public:
    Reconstruction(const cv::Mat& inputLeft, const cv::Mat& inputRight);
    virtual ~Reconstruction();

    /**
     * Reconstruct the scene from the two views.
     */
    void reconstruct();

    /**
     * Save the reconstruction result to an XYZ file.
     * @param filename the filename to save into (overwrite).
     */
    void saveResultToFile(const std::string& filename);
};

#endif /* RECONSTRUCTION_H_ */
