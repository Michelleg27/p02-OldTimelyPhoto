#include <string>
#include <vector>
#include "bitmap.h"

using namespace std;

int main()
{
//ask user for the name of the an image
    //cout question and cin the users input
    //storage users input
//covert image 

//save file - oldtimey.bmp



 
Bitmap image;

  Pixel purpleDot;
  purpleDot.red = 255;
  purpleDot.green = 0;
  purpleDot.blue = 255;


  vector <vector <Pixel> > bmp;
  Pixel rgb;

  image.open("machupicchu.dib.bmp");
  bmp = image.toPixelMatrix();

  rgb = bmp [0] [0];
  rgb.red = 0;

  bmp[0][0] = rgb;
  image.fromPixelMatrix(bmp);
  image.save("machupicchu.dib.bmp");

  std::vector <std::vector <Pixel> > toPixelMatrix();


   return 0;
}
