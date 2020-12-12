#include <iostream>
#include <fstream>
using namespace std;
void pickColor(string color, int& point, ofstream& myfile);
bool inputs(string input);

class test{
  public:
    string colors[5];
    int point = 0;
    string color1;
    string color2; 
    test(){
      defineColors();
      int point = 0;
      string color1;
      string color2;
    }
    void defineColors(){
      colors[0]="green";
      colors[1]="orange";
      colors[2]="blue";
      colors[3]="yellow";
      colors[4]="red";
    }
    void visionTest(int colorBlind){
      int c1;
      int c2;
      // MAKE SURE YOU USE LOWER CASE CHARACTERS!!!!!
      // The code that ask you what color you see and ask for a y or a n
      switch(colorBlind){
        case 1:
          c1=0;
          c2=1;
          break;
        case 2:
          c1=2;
          c2=3;
          break;
        case 3:
          c1=2;
          c2=4;
          break;
        case 4:
          c1=0;
          c2=4;
          break;

      }
      cout << "Picture " << colorBlind <<": Please look at Picture " << colorBlind << "." << endl;
      cout << "Do you see " << colors[c1] << "? (y/n)" << endl;
      cin >> color1;
      pickColor(color1, point);
      cout << "Do you see "<< colors[c2] << "? (y/n)" << endl;
      cin >> color2;
      pickColor(color2, point);

       cout << "you got " << point << " points" << endl;
 
    }

    void pickColor(string color, int& point)
    {
      while(inputs(color)){
        cout << "Not a valid input. Please try again." <<endl;
        cin >> color; 
      }
        if( color == "y") {
        point++;
        cout << "you got a point for a part of the picture.\n";
      }
    }

};

// when typing your input it should be one character and enter.
int main()
{
 string input;

ofstream myfile;
myfile.open("file.txt");
if(myfile.is_open()){
do{
  test current;
  cout << "You will get 1 point for each color correct" << endl;
  current.visionTest(1);
  current.visionTest(2);
  current.visionTest(3);
  current.visionTest(4);
  
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
// the correct answers will be display in the text files
// adds points to each picture and holds the Not invalid message
// if you put anything other the y or n the code would output not valid
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