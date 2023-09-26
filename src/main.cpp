#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;
int main()
{
  std::cout << "start" << std::endl;
  std::string image_path = "../assets/plane.png";
  Mat img = imread(image_path, IMREAD_COLOR);

  std::cout << "size = " << img.size() << std::endl;
  namedWindow( "Display window", WINDOW_NORMAL );
  imshow("Display window", img);

  std::cout << "end" << std::endl;
  int k = getchar(); // Wait for a keystroke in the window
  return 0;
}