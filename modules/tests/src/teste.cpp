#include <iostream>
#include <stdio.h>
#include "opencv2/highgui/highgui.hpp"

//using namespace cv;

int main( int argc, char** argv ) {
	if (argc < 1) {
		printf("You need to input at least one image");
		return -1;
	}
	cv::Mat img = cv::imread(argv[1], -1);
	if(img.empty()) { 
		return -1;
	}
	cv::namedWindow("Example2", cv::WINDOW_AUTOSIZE);
	cv::imshow("Example2", img);
	cv::waitKey(0);
	cv::destroyWindow("Example2");
}
