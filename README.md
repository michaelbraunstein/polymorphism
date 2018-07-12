# polymorphism



5-12.    Adding on to 5-8b with the rectangle - cube inheritance,
we add on another subclass of rectangle for a colored rectangle 
that adds a new field for the color, the constructors should either
set an argument to the color or initialize the color to a default
blue, and the print should call the rectangle print and then
add on a statement to print the color.

The new version of the super class and two sub classes are attached.

Create a main that declares an array of three rectangle pointers.
Each element should be a different kind of object that “is a”
rectangle (rectangle, cube, colored rectangle), then separately 
run the three different constructors (you can send it any values 
that match up with the argument constructors) and assign to
each element of the array (ex. spot 0 rectangle, spot 1 cube,
spot 2 colored rectangle).  Then in a for loop, print the address 
of each object that "is a" rectangle (the address in the pointer)
and then use dynamic binding to call the print function to print
each of the objects in the array.

Attach your .cpp file and an output .txt file and submit.
cube5-12.h
colorrectangle5-12.h
rectangle5-12.h
