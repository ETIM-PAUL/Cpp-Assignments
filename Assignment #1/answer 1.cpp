/*
*Question1.cpp
*
*Name:          [Etim Paul Ekpenyong]
*Department:    [Computer Science]
*Matric Number  [PDS/2013/6732]
*
*Program that reads an integer and determines
*and prints whether it is odd or even
*
*Stub file for assignment 1
*/

#include <iostream>
//a program determining if a number is odd or even

using namespace std;

int main()//main function
 {
 int num;

 cout << "Enter a number? ";
 cin >> num;

 if ( num % 2==0)
 cout << "The number " << num << " is even." << endl;
 
 else
 cout << "The number " << num << " is odd." << endl;

 return 0;
 }

