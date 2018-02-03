#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <string>
    
using namespace cv;
using namespace std;
    
int main(void)
{
    Mat image;
    // Read the file "CHANGEME.JPG".
    // This file "image.jpg" should be in the project folder.
    // Else provide full path: "D:/images/image.jpg"
    String imageName( "CHANGEME.JPG" ); // by default
        
    // LOAD image
    image = imread(imageName, IMREAD_COLOR);
        
    if(image.empty()) // Check for invalid input
    {
        cout <<  "Could not open or find the image" << std::endl ;
        return -1;
    }
        
    Mat grayImage;
    // convert color image to gray
    cvtColor(image, grayImage, COLOR_BGR2GRAY);
        
    // DISPLAY image
    // Create a window for display.
    namedWindow("image", WINDOW_AUTOSIZE);
    namedWindow("gray image", WINDOW_NORMAL);
        
    // Show our image inside it.
    imshow("image", image);
    imshow("gray image", grayImage);
    // Both images are displayed but gray image on top of original image
    // Move gray image window to see original image
        
    // SAVE image
    imwrite("CHANGEME.JPG", image);  // it will store the image with name "result.jpg"
    imwrite("CHANGEME.JPG" , grayImage); // it will store the gray image with name "result_gray.jpg"
        
    return 0;
}



