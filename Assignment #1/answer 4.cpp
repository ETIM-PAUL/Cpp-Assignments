/*
*Question4.cpp
*
*Name:          [Etim Paul Ekpenyong]
*Department:    [Computer Science]
*Matric Number  [PDS/2013/6732]
*
*Program that inputs a five-digit integer, 
*seperates the integer into its digits and prints them separated by three spaces each
*
*Stub file for assignment 1 - question#4
*/

#include <iostream>
#include <string>

using namespace std;
int main()
 {
 int num;
 
 cout << "Enter a five-digit number: "<<endl;
 cin >> num;
 
 cout<<"  "<<endl;
 cout << num / 10000 << " ";
 num = num % 10000;
 cout << num / 1000 << " ";
 num = num % 1000;
 cout << num / 100 << " ";
 num = num % 100;
 cout << num / 10 << " ";
 num = num % 10;
 cout << num << endl;

 return 0;


 return 0;
}
