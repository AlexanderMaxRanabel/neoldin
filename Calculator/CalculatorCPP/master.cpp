#include <iostream>

using namespace std;

int main()
{
  int x,y;
  string z,control;
  int recmode,recshort,reclong;
  int sqcontrol,sq;

  cout<<"Please Enter A Number"<<endl;
  cin>>x;
  cout<<"Please Enter A Number"<<endl;
  cin>>y;
  cout<<"Please Enter An Operation: +, - , * , / for first four operations. add ! to end of your prefered operations symbol to see the results of what if these two number are switched places. Write AD to enter advenced mode."<<endl;
  cin>>z;

  int a = x + y;
  int b = x - y;
  int c = x * y;
  int d;

  int a1 = y + x;
  int b1 = y - x;
  int c1 = y * x;
  int d1;

  if (x == 0 || y == 0){
    cout<<"ERROR: Cannot devide by zero"<<endl;
  } else {
    d = x / y;
    d1 = y / x;
  }

  if (z == "+") {
    cout<<a<<endl;
  }

  if (z == "-") {
    cout<<b<<endl;
  }

  if (z == "*") {
    cout<<c<<endl;
  }

  if (z == "/") {
    cout<<d<<endl;
  }

  if (z == "+!") {
    cout<<a1<<endl;
  }

  if (z == "-!") {
    cout<<b1<<endl;
  }

  if (z == "*!") {
    cout<<c1<<endl;
  }

  if (z == "/!") {
    cout<<d1<<endl;
  }

  if (z == "AD"){
    cout<<"Enter 1 to calculate the area of a square. 2 to calculato the perimeter of a square. 3 to enter Rectangle Mode"<<endl;
    cin>>sqcontrol;
  }

  // Advenced Mode code starts here

  switch (sqcontrol){
  case 1:
    cout<<"Please Enter How Long is One side of the Square"<<endl;
    cin>>sq;
    cout<<sq * sq<<endl;
    cin>>control;
    break;
  case 2:
    cout<<"Please Enter How Long is One side of the Square"<<endl;
    cin>>sq;
    cout<<sq + sq + sq + sq<<endl;
    cin>>control;
    break;
  case 3:
    cout<<"Enter 1 to calculate the area of the rectangle 2 to calculate the perimeter of the rectangle"<<endl;
    cin>>recmode;
    cin>>control;
    break;
  default:
    cout<<"Unknown"<<endl;
    cin>>contro;
    break;
  }

  switch (recmode) {
  case 1:
    cout<<"Please Enter How Long is the short side of the Rectangle"<<endl;
    cin>>recshort;
    cout<<"Please Enter How Long is the long side of the Rectangle"<<endl;
    cin>>reclong;

    cout<<recshort * reclong<<endl;
    cin>>control
    break;
  case 2:
    cout<<"Please Enter How Long is the short side of the Rectangle"<<endl;
    cin>>recshort;
    cout<<"Please Enter How Long is the long side of the Rectangle"<<endl;
    cin>>reclong;

    cout<<recshort + recshort + reclong + reclong<<endl;
    cin>>control;
    break;
  default:
    cout<<"Unknown"<<endl;
    cin>>control;
    break;
  }


  return 0;
}
