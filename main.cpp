#include <iostream>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/objdetect.hpp>

using namespace std;
using namespace cv;

int main() {
	VideoCapture video(0);
	CascadeClassifier facedetect;
	CascadeClassifier eyedetect;
	facedetect.load("../haarcascades/haarcascade_frontalface_default.xml");
	eyedetect.load("../haarcascades/haarcascade_eye.xml");
	Mat img;

	while (true) {
		video.read(img);
		vector<Rect> faces;
		vector<Rect> eyes;

		facedetect.detectMultiScale(img, faces);
		eyedetect.detectMultiScale(img, eyes);

		for (int i = 0;i < faces.size();i++) {
			rectangle(img, faces[i].tl(), faces[i].br(), Scalar(50, 50, 255), 3);
		}

		for (int i = 0;i < eyes.size();i++) {
			rectangle(img, eyes[i].tl(), eyes[i].br(), Scalar(255, 0, 0), 3);
		}

		imshow("Face", img);
		waitKey(1);

	}

}
