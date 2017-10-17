#include <iostream>
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


string input;
vector<vector<int> >matrix;
void open (std::string);
void save(std::string);

cout<<"What is the name of the image you want to see"<<endl; 
cin>>input;

for(int row=0; row<matrix.size(); row++)
    {
        for(int col=0; col<matrix[row].size(); col++)
            {
            cout<<"It is 2486 pixels wide and 532 pixels high"<<endl; 
           
             }
     }         

  Pixel purpleDot;
  purpleDot.red = 255;
  purpleDot.green = 0;
  purpleDot.blue = 255;

//rgb =matrix[row][col]; 
//rgb.red = 30;
//rgb.green = 10;
// rgb.blue = 50;




Bitmap image;

  vector <vector <Pixel> > bmp;
  Pixel rgb;

  image.open("machupicchu.dib.bmp");
  bool validBmp = image.isImage();
  if (validBmp == true)
    {
        bmp = image.toPixelMatrix();


  rgb = bmp [0] [0];
  rgb.red = 0;

  bmp[0][0] = rgb;
  image.fromPixelMatrix(bmp);
  image.save("machupicchu.dib.bmp");

  std::vector <std::vector <Pixel> > toPixelMatrix();
void fromPixelMatrix(const std::vector <std::vector <Pixel> > &);

    }
   return 0;
}
