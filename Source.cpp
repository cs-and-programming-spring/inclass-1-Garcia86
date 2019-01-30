/***********************************************
* Name: Christian Garcia
* Email: garcia86@students.rowan.edu
***********************************************
* Purpose:
* This program calculates the circumference of a circle.
***********************************************/

#include <iostream>

using namespace std; 

const  float PI = 3.14159;

int main()
{
		float radius, circumference;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program calculates the circumference of a circle." << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input radius of circle: ";
	cin >> radius;

	//Compute circumference to 2 * PI * radius
	circumference = 2 * PI * radius;

	//Display the distance in kilometers 
	cout << "The circumference of the circle is = " << circumference << "\n\n";

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
	cout << "The distance in kilometers is = " << kilometers << "\n\n";

		float area;
	
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