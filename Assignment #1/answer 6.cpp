/*
*Question6.cpp
*
*Name:          [Etim Paul Ekpenyong]
*Department:    [Computer Science]
*Matric Number  [PDS/2013/6732]
*
*Body Mass Index (BMI) calculator application that reads
*the user's weight in kilograms and heght in metres
*calculates and display the user's body mass
*
*Stub file for assignment 1- question #6
*/

#include<iostream>
using namespace std;


int main()
{
	int weightInKilograms;
	int heightInmeters;
	int BMI;

 cout << "Enter weight in kg?";
 cin >>weightInKilograms;
 
 cout << "Enter height in m?";
 cin >>heightInmeters;

cout<<"BMI"<<"\t"<<"is"<<"\t"<<weightInKilograms/(heightInmeters*heightInmeters)<<endl;
"/t";


{
	cout<<" "<<endl;
	cout<<"BMI VALUES"<<endl;
	cout<<" "<<endl;
	cout<<"Underweight:     Less than 18.5"<<endl;
	cout<<"Normal:          between 18.5 and 24.9"<<endl;
	cout<<"Overweight:      between 25 and 29.9"<<endl;
	cout<<"Obese:	         30 or greater"<<endl;
	
	return 0;
}
}

