#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;
const char* window_name1 = "Sample template";

int main(int argc, const char** argv)
{
  std::string image_path = "../assets/plane.png";
  auto image = imread(image_path, IMREAD_COLOR);
  if (image.empty())
  {
      printf("Cannot read image file: %s\n", image_path.c_str());
      return -1;
  }
  namedWindow(window_name1, 1);
  imshow(window_name1, image);

  waitKey(0);
  return 0;
}