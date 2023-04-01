# Face-Eye-Detection
Face detection has gained a lot of attention due to its real-time applications. A lot of research has been done and still going on for improved and fast implementation of the face detection algorithm. This project uses C++ and OpenCV to detect faces and eyes in live webcam.

OpenCV contains many pre-trained classifiers for face, eyes, smile etc. The XML files of pre-trained classifiers are stored in haarcascades/ folder. 
Haar Cascade Classifier is a machine learning based approach where a cascade function is trained from a lot of positive (images with face) and negative images (images without face). The algorithm is proposed by Paul Viola and Michael Jones. We have used this classifiers to detect faces and eyes in our project.
<br>
## Features
<ul>
  <li>Detecting Multiple Faces</li>
  <li>Detecting eyes</li>
 </ul>
 
  ## Technologies
 <ul>
  <li>C++</li>
  <li>OpenCV 4.6.0</li>
 </ul>
 
  ## Setup
 Clone this repo and use Visual Studio to run the c++ program. Make sure you have downloaded opencv and add the required opencv librariers to your project in Visual Studio.<br>
 Kindly checkout how to setup OpenCV in Visual Studio <a>https://subwaymatch.medium.com/opencv-410-with-vs-2019-3d0bc0c81d96<a/>
 <br>
 ## Demo
 
 ![Face_Eye](https://user-images.githubusercontent.com/18510244/229293562-952764ea-74d2-4fd8-a96c-04f76e98aeaa.PNG)
