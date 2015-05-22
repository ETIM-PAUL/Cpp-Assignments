/*
*Question2.cpp
*
*Name:          [Etim Paul Ekpenyong]
*Department:    [Computer Science]
*Matric Number  [PDS/2013/6732]
*
*program that reads two integers and determines
*if first is a multiple of second
*
*Stub file for assignment 1 - question #2
*/

#include <iostream>
//a program printing to determine if a number is a multiple of another number
using namespace std;


int main()
  {
 int num1, num2;

 cout << "Enter two integers?";
 cin >> num1 >> num2;

 if ( num1 % num2 == 0 )
 cout << num1 << " is a multiple of " << num2 << endl;

 else
 cout << num1 << " is not a multiple of " << num2 << endl;

 return 0;
 }

