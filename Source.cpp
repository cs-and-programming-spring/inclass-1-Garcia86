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
	/***********************************************
	* Name: Christian Garcia
	* Email: garcia86@students.rowan.edu
	***********************************************
	* Purpose:
	* This program converts a distance in miles to meters, centimeters, and millimeters.
	***********************************************/
	
	float miles, meters, centimeters, millimeters, kilometers;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program converts a distance in miles to meters, centimeters, and millimeters." << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input distance in miles: ";
	cin >> miles;

	//Compute meters to miles * 
	meters = miles * 1609.34;
	
	//Compute centimeters to miles * 
	centimeters = miles * 160934;
	
	//Compute millimeters to miles * 
	millimeters = miles * 1.609e+6;

	//Display the distance in meters 
	cout << "The distance in meters is = " << meters << "\n\n";
	
	//Display the distance in centimeters 
	cout << "The distance in centimeters is = " << centimeters << "\n\n";
	
	//Display the distance in millimeters 
	cout << "The distance in millimeters is = " << millimeters << "\n\n";

	/***********************************************
	* Name: Christian Garcia
	* Email: garcia86@students.rowan.edu
	***********************************************
	* Purpose:
	* This program calculates the circumference of a circle.
	***********************************************/
	
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


	/***********************************************
	* Name: Christian Garcia
	* Email: garcia86@students.rowan.edu
	***********************************************
	* Purpose:
	* This program converts a distance in miles to kilometers.
	***********************************************/

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program converts a given distance in miles into kilometers." << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input distance in miles: ";
	cin >> miles;

	//Compute kilometers to miles * 1.60934
	kilometers = miles * 1.60934;

	//Display the distance in kilometers 
	cout << "The distance in kilometers is = " << kilometers << "\n\n";

	/***********************************************
	* Name: Christian Garcia
	* Email: garcia86@students.rowan.edu
	***********************************************
	* Purpose:
	* This program calculates the area of a circle.
	***********************************************/
	
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