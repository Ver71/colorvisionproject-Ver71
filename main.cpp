#include <iostream>
#include <fstream>
using namespace std;
void pickColor(string color, int& point, ofstream& myfile);
bool inputs(string input);

// when typing your input it should be one character and enter.
int main()
{
 string color1;
 string color2;
 string input;
 string colors[]={"green", "orange", "blue", "yellow", "red"}; 

ofstream myfile;
myfile.open("file.txt");
if(myfile.is_open()){
do{
// MAKE SURE YOU USE LOWER CASE CHARACTERS!!!!!

  int point = 0;
  cout << "You will 1 point for each color correct" << endl;
  cout << "Picture 1: Please look at Picture 1" << endl;
  cout << "Do you see " << colors[0] << "? (y/n)" << endl;
  cin >> color1;
  pickColor(color1, point, myfile);
  cout << "Do you see "<< colors[1] << "? (y/n)" << endl;
  cin >> color2;
  pickColor(color2, point, myfile);

  cout << "you got " << point << " points" << endl; 

  cout << "Picture 2: Please look at Picture 2" << endl;
  cout << "Do you see "<< colors[2] << "? (y/n)" << endl;
  cin >> color1;
  pickColor(color1, point, myfile);
  cout << "Do you see "<< colors[3] << "? (y/n)" << endl;
  cin >> color2;
  pickColor(color2, point, myfile);

  cout << "you got " << point << " points" << endl; 

  cout << "Picture 3: Please look at Picture 3" << endl;
  cout << "Do you see "<< colors[2] << "? (y/n)" << endl;
  cin >> color1;
  pickColor(color1, point, myfile);
  cout << "Do you see "<< colors[4] << "? (y/n)" << endl;
  cin >> color2;
  pickColor(color2, point, myfile);

  cout << "you got " << point << " points" << endl; 

  cout << "Picture 4: Please look at Picture 4" << endl;
  cout << "Do you see "<< colors[0] << "? (y/n)" << endl;
  cin >> color1;
  pickColor(color1, point, myfile);
  cout << "Do you see "<< colors[4] << "? (y/n)" << endl;
  cin >> color2; 
  pickColor(color2, point, myfile);
  
  cout << "you got " << point << " points" << endl; 
  
  cout << "Type y if you want to retake the test." << endl; 
  cout << "Type n if you don't want to retake the test." << endl;
  cin >> input;
  cin.ignore();
    
}
  while(input != "n");
}
  myfile.close();
  return 0;
}
void pickColor(string color, int& point, ofstream& myfile)
{
  while(inputs(color)){
    cout << "Not a valid input. Please try again." <<endl;
    cin >> color; 
  }
    if( color == "y") {
    point++;
     myfile << "you got a point for a part of the picture.\n";
  }
}
// the correct answers will be display in the text files
bool inputs(string input)
{
 if(input != "y" && input !=  "n")
 {
   return true;
 }
 else
 {
   return false;
 }
}