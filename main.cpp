#include <iostream>
#include <fstream>
using namespace std;
// when typing your input it should be one character and enter.
int main()
{
 string color1;
 string color2;
 char input;

ofstream myfile;
myfile.open("file.txt");
if(myfile.is_open()){
do{
// MAKE SURE YOU USE LOWER CASE CHARACTERS!!!!!

  int point = 0;
  cout << "You will 1 point for each color correct" << endl;
  cout << "Picture 1: Please look at Picture 1" << endl;
  cout << "Do you see green? (y/n)" << endl;
  cin >> color1;
  cout << "Do you see orange?" << endl;
  cin >> color2;
  
  if( color1 == "y") {
    point++;
    myfile << "you got a point for part a picture 1.\n";
  }
  if(color2 == "y"){
    point++;
    myfile << "you got a point for part b picture 1.\n";
  }

  
  cout << "Picture 2: Please look at Picture 2" << endl;
  cout << "Do you see blue ? (y/n)" << endl;
  cin >> color1;
  cout << "Do you see yellow ? " << endl;
  cin >> color2;
    
  if( color1 == "y") {
    point++;
     myfile << "you got a point for part a picture 2.\n";
  }
  if(color2 == "y"){
    point++;
      myfile << "you got a point for part b picture 2.\n";
  }

  cout << "Picture 3: Please look at Picture 3" << endl;
  cout << "Do you see blue ? (y/n)" << endl;
  cin >> color1;
  cout << "Do you see red ?" << endl;
  cin >> color2;
    
  if( color1 == "y") {
    point++;
     myfile << "you got a point for part a picture 3.\n";
  }
  if(color2 == "y"){
    point++;
      myfile << "you got a point for part b picture 3.\n";
  }

  cout << "Picture 4: Please look at Picture 4" << endl;
  cout << "Do you see green ? (y/n)" << endl;
  cin >> color1;
  cout << "Do you see red ?" << endl;
  cin >> color2;
    
  if( color1 == "y") {
    point++;
     myfile << "you got a point for part a picture 4.\n";
  }
  if(color2 == "y"){
    point++;
      myfile << "you got a point for part b picture 4.\n";
  }
  cout << "you got " << point << " points" << endl; 
  cout << "Type n if you do not want to retake the test." << endl;
  cin >> input;
  cin.ignore();
    
}
  while(input != 'n');
}
  myfile.close();
  return 0;
}
// the correct answers display in the text files