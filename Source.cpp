#include <iostream>
#include <string>

using namespace std;

//Problem #1
int main()

{
    int program;
    do {cout<<"Which program would you like to use? (1-7, 0 to exit program)"<<endl;
    cin>>program;
    cout<<endl<<endl;
    
    if (program==1)
    {
    
int a;
int b;

cout<<"Problem 1:" << endl;

for(a=1; a <= 3; a++)

{
    
for (b=1; b <= 5; b++)
cout << a;
cout << endl;

}

cout<<endl;
cout<<endl;
}
if (program==2)
{
//Problem #2
cout<<"Problem 2:" << endl;

int c;
int d;


for(c=1; c <= 3; c++)

{
    
for (d=1; d <= 5; d++)
cout << d;
cout << endl;

}

cout<<endl;
cout<<endl;
}
if (program==3)
{
//Problem #3
cout<<"Problem 3:" << endl;
cout<<endl;
int e;
int f;
int input;

cout<<"Please insert a number from 1 to 9. \nYour input: ";
cin>>input;
cout<<endl;

if (input > 0 && input < 10)

for(e=1; e <= input; e++)

{
    
for (f=1; f <= 5; f++)
cout << f;
cout << endl;

}
else {
    cout <<"Your input was not within the range"<< endl;
    }

cout<<endl;
cout<<endl;
}
if (program==4)
{
//Problem 4

cout<<"Problem 4:"<<endl;
int hour, min, callTime, check;
	double costmf_day=0.40, costmf_night=0.25, cost_wknd=0.15, totalCost;
	char colon, dayOfWeek;

	do
	{
		cout << "What day of the week was the call? (M/T/W/R/F/S/U) ";
		cin >> dayOfWeek;
		if (dayOfWeek == 'M' || dayOfWeek == 'm' || dayOfWeek == 'T' || dayOfWeek == 't' || dayOfWeek == 'W' || dayOfWeek == 'w' ||
			dayOfWeek == 'R' || dayOfWeek == 'r' || dayOfWeek == 'F' || dayOfWeek == 'f' || dayOfWeek == 'U' || dayOfWeek == 'u')
			check = 0;
		else
		{
			cout << "Please enter a valid day." << endl;
			check = 1;
		}
	} while (check == 1);

	do
	{
		cout << "What time was it? ";
		cin >> hour >> colon >> min;
		if ((hour<=23&&hour>=0)&& (min <= 59 && min >= 0)&& colon==':')
			check = 0;
		else
		{
			cout << "Please enter a valid time." << endl;
			check = 1;
		}
	} while (check == 1);

	do
	{ 
	cout << "How long was the call? ";
	cin >> callTime;
	if (callTime<=720&&callTime>=0)
		check = 0;
	else
	{
		cout << "Please enter a valid call time." << endl;
		check = 1;
	}
	} while (check == 1);

	if (dayOfWeek == 's' || dayOfWeek == 'u')
		totalCost = cost_wknd * callTime;
	else
	{
		if ((hour > 8) && (hour < 18))
			totalCost = costmf_day * callTime;
		else
			totalCost = costmf_night * callTime;
	}

	cout << "The call cost is $" << totalCost;

cout<<endl;
cout<<endl;
}
if (program==5)
{
//Problem #5


cout<<"Problem 5:" << endl;
cout<<endl;

float liters;
float miles;
float gallon;
float efficiency;
char Y_N;

do {
cout<<"Please input the amount of liters of gas your vehicle has consumed -> ";
cin>>liters;
cout<<endl;

cout<<"Please input the number of miles your vehicle has traveled -> ";
cin>>miles;
cout<<endl;

if (liters > 0 && miles > 0)

{
//liters to gallon conversion
gallon = liters * 0.264179;

//Calculate the efficiency of the vehicle
efficiency = miles / gallon;

//Display the efficiency of the vehicle
cout<< "The miles per gallon of your vehicle is = "<< efficiency << endl;
}

else {
    cout <<"One of your inputs was not a positive value"<< endl;
    }
cout<<endl;
cout<<"Would you like to run this again? (Y/N) "<< endl;
cin>>Y_N;
cout<<endl;
cout<<endl; 
    
}while (Y_N == 'Y');
}
if (program==6)
{
 //Problem 6
   int i, number=0;
cout<< "Problem 6:"<<endl;
cout<< "This program displays all prime numbers below the value you input" << endl << endl;
cout<< "Please input a number greater than 1 and less than 10000" << endl;
cin>>number;


if ((number > 1) && (number < 10000))
{
    cout<< "Prime numbers smaller than " << number << " are:\n";
    // Smallest prime number is 2
    
    for(i = 2; i <= number; i++)
    {
        bool is_prime=true;
     int modcheck;
     for(int z = 2; z < i; z++)
     {
        modcheck=i%z;
        if (modcheck == 0)
        {
            is_prime=false;
            break;
        }

    }
    if (is_prime==true)
    {
        cout << i << " ";
    }
    }   

}

cout<<endl;
cout<<endl;
}
if (program==7)
{
//Problem #7

    cout<<"Problem 7:" << endl;
    int g = 0, h = 1, nextTerm = 0, num;

    cout << "Please input a positive number: ";
    cin >> num;

    cout << "Fibonacci Series: " <<g << ", " << h << ", ";

    nextTerm =g + h;

    while(nextTerm <= num)
    {
        cout << nextTerm << ", ";
        g = h;
        h = nextTerm;
        nextTerm = g + h;
    }
}
    }while(program!=0);
    return 0;

}

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
