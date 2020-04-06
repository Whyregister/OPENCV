#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

int main()
{
    Mat src = imread("e:/VScode/1.jpg",3);
    src.empty() ? std:: cout << "you" << std::endl : std:: cout << "wu" << std::endl;
    MatIterator_<Vec3i> it,itend;
    itend = src.end<Vec3i>();
    for ( it = src.begin<Vec3i>() ; it != itend ; ++it)
    {
        (*it)[0] += 5;
        (*it)[1] += 5;
        (*it)[2] += 5;
    }

    imshow("dd",src);
    Mat  imput;
    Canny(src,imput,150,50);
    imwrite("E:/VScode/c.png",imput);
    waitKey();
    return 0;
}