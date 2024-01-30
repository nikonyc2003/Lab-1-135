//Author: Nikolas Bano
//Course: CSCI-135
//Instructor: Tong Yi
//Assignment: Lab 1A
//This program prints out the smaller of two integers
//.
//.
//.*

#include <iostream>
using namespace std;
int main(){
  int num1;
  int num2;
  int num3;

  cout << "Enter the first number:";
  cin >> num1;

  cout << "Enter the second number ";
  cin >> num2;

  cout << "Enter the third number ";
  cin >> num3;
  
  if(num3 < num1 && num3 < num2){
    cout << "The smaller of the three is " << num3;
  }
  else if(num1 < num2){
    cout << "The smaller of the three is " << num1;
  }
  else{
    cout << "The smaller of the three is " << num2;
  }
return 0;
}
