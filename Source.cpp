/***********************************************
* Name: Christian Garcia
* Email: garcia86@students.rowan.edu
***********************************************
* Purpose:
* This program calculates the circumference of a circle.
***********************************************/ 

const  float PI = 3.14159;

int main()
{
	/***********************************************
	* Name: Christian Garcia
	* Email: garcia86@students.rowan.edu
	***********************************************
	* Purpose:
	* This program prints my first initial as a block letter.
	***********************************************/ 
  
  //Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program prints my first initial as a block letter." << endl;
	cout << " ******************************************\n\n";
  
  //Get user input
	cout << "Christian Garcia's first initial as a block letter looks like this! \n\n";
  
  //Display the block letter
  cout << " *****" << endl;
  cout << "*     " << endl;
  cout << "*     " << endl;
  cout << "*     " << endl;
  cout << "*     " << endl;
  cout << " *****" << endl;
	
	/***********************************************
	* Name: Christian Garcia
	* Email: garcia86@students.rowan.edu
	***********************************************
	* Purpose:
	* This program converts a person's age to years, months, days, hours, minutes, and seconds.
	***********************************************/

    
    
  float age, years, months, days, hours, minutes, seconds;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program converts a person's age to years, months, days, hours, minutes, and seconds." << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input person's age: ";
	cin >> age;

	//Compute years to age
	years = age;
	
	//Compute months to years * 12
	months = years * 12;
	
	//Compute days to years * 365.25
	days = years * 365.25;
	
	//Compute hours to days * 24
	hours = days * 24;
	
	//Compute minutes to hours * 60
	minutes = hours * 60;

   	 //Compute seconds to minutes * 60
	seconds = minutes * 60;

	//Display the age in years 
	cout << "The age in years is = " << years << "\n\n";
	
	//Display the age in months 
	cout << "The age in months is = " << months << "\n\n";
	
	//Display the age in days 
	cout << "The age in days is = " << days << "\n\n";
	
	//Display the age in hours 
	cout << "The age in hours is = " << hours << "\n\n";
	
	//Display the age in minutes 
	cout << "The age in minutes is = " << minutes << "\n\n";
	
	//Display the age in seconds 
	cout << "The age in seconds is = " << seconds << "\n\n";
	
	/***********************************************
	* Name: Christian Garcia
	* Email: garcia86@students.rowan.edu
	***********************************************
	* Purpose:
	* This program converts a temperature in degrees Celsius to degrees Fahrenheit.
	***********************************************/
	
	float Celsius, Fahrenheit;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program converts a temperature in degrees Celsius to degrees Fahrenheit." << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input temperature in Celsius: ";
	cin >> Celsius;

	//Compute Fahrenheit to Celsius * * (9/5) + 32
	Fahrenheit = Celsius * (1.8) + 32;
	

	//Display the degrees in Fahrenheit 
	cout << "The degrees in Fahrenheit is = " << Fahrenheit << "\n\n";
	
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

	//Compute meters to miles * 1609.34
	meters = miles * 1609.34;
	
	//Compute centimeters to miles * 160934
	centimeters = miles * 160934;
	
	//Compute millimeters to miles * 1.609e+6
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
