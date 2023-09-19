#include "shadowRemoval.h"

int main(int argc, char* argv[]){
  
  cv::VideoCapture capture(argv[1]);
  if (!capture.isOpened()){
      cv::VideoCapture capture(argv[1]);
  }
  cv::Mat original;
  cv::namedWindow("output",1);
  while(1){
    capture >> original;
    cv::namedWindow("original_video",1);
    cv::imshow("original_video",original);
    cv::imwr