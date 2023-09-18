#include "shadowRemoval.h"

int main(int argc, char* argv[]){
  
  cv::VideoCapture capture(argv[1]);
  if (!capture.isOpened()){
      cv::VideoCapture c