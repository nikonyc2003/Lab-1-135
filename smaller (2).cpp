//Author: Nikolas Bano
//Course: CSCI-135
//Instructor: Tong Yi
//Assignment: Lab 1A
//This program prints out the smaller of two integers

#include <iostream>
using namespace std;
int main(){
  int num1;
  int num2;

  cout << "Enter the first number:";
  cin >> num1;

  cout << "Enter the second number ";
  cin >> num2;

  if (num1 < num2)
    cout << "The smaller of the two is " << num1 << endl;
  else
    cout << "The smaller of the two is " << num2 << endl;
  
return 0;
}