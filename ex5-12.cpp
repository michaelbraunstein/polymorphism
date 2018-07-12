/* Michael Braunstein
Exercise 5-12
July 11, 2018
Wohlleber



5-12.    Adding on to 5-8b with the rectangle - cube inheritance,
we add on another subclass of rectangle for a colored rectangle 
that adds a new field for the color, the constructors should either
set an argument to the color or initialize the color to a default
blue, and the print should call the rectangle print and then add
on a statement to print the color.

The new version of the super class and two sub classes are attached.

Create a main that declares an array of three rectangle pointers. 
Each element should be a different kind of object that “is a” rectangle 
(rectangle, cube, colored rectangle), then separately run the three 
different constructors (you can send it any values that match up with
the argument constructors) and assign to each element of the array
(ex. spot 0 rectangle, spot 1 cube, spot 2 colored rectangle).  
Then in a for loop, print the address of each object that "is a"
rectangle (the address in the pointer) and then use dynamic binding 
to call the print function to print each of the objects in the array.

Attach your .cpp file and an output .txt file and submit.
cube5-12.h
colorrectangle5-12.h
rectangle5-12.h



This program will create a rectangle object

5-8a. Modify the rectangle class definition from 5-1 so it is the super class.  Add a sub
class for a cube and adjust the main to work with the new rectangle super class and cube 
sub class.  Following is the main class.

Note this could be a rectangular prism, since we have separate values for length, width,
and depth.  The perimeter will be the distance around all sides and the area will be the 
surface area of all sides.

This exercise will be similar to 5-8b shown above (in the Labs section).

Modify last week's lab exercise rectangle5-1 class to super class rectangle5-8a.h 
(it was a lab from last week so it is attached).

Add the new sub class cube5-8a.h that will inherit from rectangle5-8a.  Add the new
depth field.  Code the no argument constructor to call the rectangle5-8a constructor,
then initializes the new depth field to 1, and gives the new formula for area and 
perimeter.  Add the new setdepth and getdepth functions.  Override the inherited 
calcarea and calcperimeter so it uses the new cube formulas (these could have been
combined with the set functions, but were separated to show overriding).  Attach
and submit the cube5-8a.h header file and output .txt file.

Use the following main class for ex5-8a.cpp.  Make sure the functions match the main.

*/

#ifdef  _MSC_VER

#define  _CRT_SECURE_NO_WARNINGS

#endif

#include<iostream>
#include"cube5-12.h"
#include"rectangle5-12.h"
#include"colorrectangle5-12.h"
using namespace std;



void main()
{
	rectangle512(r);
	cube512 c; // run no argument cube constructor
	colorrectangle512 d;

	r.length(20);
	r.setwidth(10);
	r.calcarea();
	r.calcperimeter();

	c.setlength(10);
	c.setwidth(5);
	c.setdepth(3);
	c.calcarea();
	c.calcperimeter();

	d.setlength(10);
	d.setwidth(5);
	d.setdepth(3);
	d.calcarea();
	d.calcperimeter();
	d.color(blue);

	cout << "\nRectangle's length = " << r.length() << endl;
	cout << "Rectangle's width = " << r.getwidth() << endl;
	cout << "Rectangle's area = " << r.getarea() << endl;
	cout << "Rectangle's perimeter = " << r.getperimeter() << endl;

	cout << "\nCube's length = " << c.getlength() << endl;
	cout << "Cube's width = " << c.getwidth() << endl;
	cout << "Cube's depth = " << c.getdepth() << endl;
	cout << "Cube's area = " << c.getarea() << endl;
	cout << "Cube's perimeter = " << c.getperimeter() << endl;

	cout << "\ncolored rectangle's length = " << d.getlength() << endl;
	cout << "colored rectangle's width = " << d.getwidth() << endl;
	cout << "colored rectangle's depth = " << d.getdepth() << endl;
	cout << "colored rectangle's area = " << d.getarea() << endl;
	cout << "colored rectangle's perimeter = " << d.getperimeter() << endl;
	cout << "colored rectangle's color = " << d.getcolor() << endl;

	system("pause");


};