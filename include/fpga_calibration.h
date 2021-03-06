#ifndef FPGA_CALIBRATION_H_
#define FPGA_CALIBRATION_H_

namespace uvc_ros_driver {

	class CameraProjectionModel {

	public:

		CameraProjectionModel() {}

		enum ProjectionModelTypes {
			PINHOLE = 0,
			RADTAN
		};

		ProjectionModelTypes type_;

		float focal_length_u_;
		float focal_length_v_;
		float principal_point_u_;
		float principal_point_v_;
		float k1_;
		float k2_;
		float r1_;
		float r2_;
		float t_[3];
		float R_[9];

	};

class FPGACalibration {

public:

	FPGACalibration() {}
	~FPGACalibration() {}

	const CameraProjectionModel* getProjectionModel() const;

	CameraProjectionModel projection_model_;
};

};

#endif /* FPGA_CALIBRATION_H_ */
