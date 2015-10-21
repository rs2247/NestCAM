//#include "opencv2/imgcodecs.hpp"
//#include "opencv2/highgui/highgui.hpp"
//#include "opencv2/imgproc.hpp"
//#include "opencv2/core/utility.hpp"

//#include "opencv2/highgui/highgui_c.h"
#include "opencv2/opencv.hpp"


#include <stdio.h>

#include <iostream>

//#include "opencv2/core.hpp"

using namespace std;
using namespace cv;
int main(int argc, char** argv )
{
	namedWindow("video_out", CV_WINDOW_AUTOSIZE );

    Mat frame;
    VideoCapture cap; 
	
	Matx12f my_mat(1.5,2.5);
	
	printf ("%f\n",my_mat(0,0));
	printf ("%f\n",my_mat(0,1));
	

	cap.open(-1);
	printf ("0");    
    if (!cap.isOpened())
    {
    	cerr << "Couldn't open camera" << endl;
  		return -1;  	
    }

	while (1)
	{
		cap >> frame;
		if (! frame.data) break;
		imshow("video_out", frame);
		if (waitKey(33) >=0) break;
	}
    return 0;
}
