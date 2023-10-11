#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;
const char* window_name1 = "Sample template";

int main(int argc, const char** argv)
{
  CommandLineParser parser( argc, argv, "{@input | plane.png | input image}" );
  auto src = imread( samples::findFile( parser.get<String>( "@input" ) ), IMREAD_COLOR );

  if( src.empty() )
  {
    std::cout << "Could not open or find the image!\n" << std::endl;
    std::cout << "Usage: " << argv[0] << " <Input image>" << std::endl;
    return -1;
  }

  namedWindow(window_name1, 1);
  imshow(window_name1, src);

  waitKey(0);
  destroyAllWindows();
  return 0;
}