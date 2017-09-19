//#include <stdio.h>
#include "iostream"
#include <opencv/cv.h>
#include <opencv2/opencv.hpp>
#include "opencv_local.h"

//using namespace std;
//using namespace cv;

//install ffmpeg by brew
#ifdef __cplusplus
extern "C" {
#endif

    //hello
    char* hello(char* n){
        //
        char* h = "Hello, ";
        //
        char* r;
        r = (char* )calloc(strlen(h)+strlen(n)+1, sizeof(char));
        //
        strcat(r, h);
        strcat(r, n);
        //
        return r;
    }
    //open video
    void openVideo(char *filename){
        //
        cv::VideoCapture cap(filename);
        cv::Mat Uframe;
        int frameCount=0;
        //
        if(!cap.isOpened()){
            std::cout << "Cannot open the video file" << std::endl;
        }
        //
        cv::namedWindow("Video", CV_WINDOW_NORMAL);
        while(++frameCount){
            bool bSuccess=cap.read(Uframe);
            if(!bSuccess){
                std::cout << frameCount << " frames read" << std::endl;
            }
            cv::imshow("Video", Uframe);
            cv::waitKey(1);
        }
    }

#ifdef __cplusplus
}
#endif