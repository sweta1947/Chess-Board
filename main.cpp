#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
using namespace cv;
using namespace std;
int main()
{
	int c = 0;
	Mat var1(80,80, CV_8UC1, Scalar(0));
	for (int i = 0; i < var1.cols; i++)
	{
		if (i % 8 == 0)
			c++;
		for (int j = 0; j < var1.rows; j++)
		{
			if (j % 8 == 0)
				c++;
			if (c%2==0)
			var1.at<uchar>(j, i) = 0;
			else
				var1.at<uchar>(j, i) = 255;
		}
	}
	namedWindow("windows1", 1);
	imshow("windows1", var1);
	waitKey(0);
	return(0);
}