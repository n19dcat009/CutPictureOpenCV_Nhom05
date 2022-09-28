//Code demo Group 05

//Bao g?m th? vi?n
#include<opencv2/opencv.hpp>
#include<iostream>
//Namespace vô hi?u hóa vi?c s? d?ng cv::function();
using namespace std;
using namespace cv;

int main() {

	//??c hình ?nh
	Mat image = imread("C:\\Users\\84395\\Music\\MEmu Music\\CutPictureOpenCV\\ptit.jpg", 1);

	Mat crop = image(Range(80, 280), Range(150, 330));
	// Hi?n th? ?nh ?ã c?t
	imshow("Hinh anh goc", image);
	imshow("Cropped Image", crop);


	waitKey(0);

	//phá h?y t?t c? các c?a s? ???c t?o ra
	destroyAllWindows();
	return 0;
}
