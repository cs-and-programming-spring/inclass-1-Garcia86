/***********************************************
* Name: Christian Garcia
* Email: garcia86@students.rowan.edu
***********************************************
* Purpose:
* This Program converts a given distance in miles into kilometers.
***********************************************/

#include <iostream>

using namespace std; 

const  float PI = 3.14159;

int main()
{

		float miles, kilometers;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This Program converts a given distance in miles into kilometers." << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input distance in miles: ";
	cin >> miles;

	//Compute kilometers to miles * 1.60934
	kilometers = miles * 1.60934;

	//Display the distance in kilometers 
	cout << " The distance in kilometers is = " << kilometers << "\n\n";
	cout << "Program has ended" << endl;

	float radius, area, circumference;
	
	//Display purpose of the program
	cout << " ******************************************"<<endl;
	cout << " This program takes in radius to compute area of circle" <<endl;
	cout << " ******************************************\n\n";
	
	//Get user input
	cout << "Please input radius: ";
	cin >> radius;
	
	//Compute area to PI*radius*radius
	area = PI* radius *radius; 
	
	//Display the area 
	cout << " The area is = " << area << "\n\n";
	cout << "Program has ended"<<endl;

	system("pause");
	
	return 0;
}