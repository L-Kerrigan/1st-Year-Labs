/* Exercise 10, Question 1 - C++
This program has 4 functions called addTwo in the one program which have 2 arguments of the same type and return 2 arguments added together. */

#include <iostream>
using namespace std;

int addTwo(int a, int b){
	return (a+b); //Returns the sum of the 2 integers
}

float addTwo(float a, float b){
	return (a+b); //Returns the sum of the 2 floats
}

long addTwo(long a, long b){
	return (a+b); //Returns the sum of the 2 long integers
}

double addTwo(double a, double b){
	return (a+b); //Returns the sum of the 2 doubles
}

int main()
{
	int ans; //To hold the number given by the user to choose which shape's area to calculate
	cout<<"Enter (1) to add 2 integers, (2) to add 2 floats, (3) to add 2 long integers and (4) to add 2 doubles.\n";
	cin>>ans;

	switch(ans){
		case 1:
		int int1, int2;  //Two variables to hold the 2 integers required by function
		cout<<"Please enter the two numbers to be added. \n";
		cin>> int1>> int2; //Taking in the 2 integers
		cout<<"The answer is: "<<addTwo(int1, int2);
		break;

		case 2:
		float f1, f2; //Two variables to hold the 2 floats required by function
		cout<<"Please enter the two numbers to be added. \n";
		cin>> f1>> f2; //Taking in the 2 floats
		cout<<"The answer is: "<<addTwo(f1, f2);
		break;

		case 3:
		long l1, l2; //Two variables to hold the 2 long integers required by function
		cout<<"Please enter the two numbers to be added. \n";
		cin>> l1>> l2;  //Taking in the 2 long integers
		cout<<"The answer is: "<<addTwo(l1, l2);
		break;

		case 4:
		double d1, d2; //Two variables to hold the 2 doubles required by function
		cout<<"Please enter the two numbers to be added. \n";
		cin>> d1>> d2; //Taking in the 2 doubles
		cout<<"The answer is: "<<addTwo(d1, d2);
		break;

		default:
		break;
	}
}
