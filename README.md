Program 3(1)
Aim:
To write a C++ program that takes a number as input and determines whether it is positive, negative, or zero using conditional statements.

Theory:In programming, decision-making is implemented using conditional control structures like if, else if, and else. These allow the program to take different paths based on specific conditions.
This program demonstrates:
Taking input from the user using cin
Comparing the input number using conditional statements
Displaying output using cout
 Logic used:
If the number is less than 0 → it is negative.
If the number is greater than 0 → it is positive.
If the number is equal to 0 → it is zero.
These conditions are evaluated using an if-else ladder, which checks the conditions in order and executes the matching block.

Algorithm:

Start the program.
Include the header file #include <iostream>.
Use the std namespace.
Declare an integer variable num.
Prompt the user to enter a number using cout.
Read the number using cin and store it in num.
Use an if-else ladder to evaluate:
If num < 0, display "number is negative".
Else if num > 0, display "number is positive".
Else (i.e., num == 0), display "number is zero".
End the program with return 0.

Program 3(2)
Aim:
To write a C++ program that takes the x and y coordinates of a point as input and determines whether the point lies in Quadrant I, II, III, IV, on the X-axis, Y-axis, or at the Origin.
Theory:
In a 2D Cartesian coordinate system, each point is defined by two coordinates: x (horizontal axis) and y (vertical axis). Based on the signs of x and y, a point lies in one of the four quadrants or on the axes:

Condition	Location
x > 0, y > 0	Quadrant I
x < 0, y > 0	Quadrant II
x < 0, y < 0	Quadrant III
x > 0, y < 0	Quadrant IV
x == 0, y == 0	Origin
x == 0, y ≠ 0	Y-axis
x ≠ 0, y == 0	X-axis
The program uses:
cin to take user input.
if-else ladder to check each condition.
cout to display the location of the point.
This kind of logic is useful in computer graphics, robotics, geometry problems, and various simulations that deal with 2D positioning.

Algorithm:

Start the program.
Include the header file #include <iostream> and use the std namespace.
Declare two integer variables x and y.
Prompt the user to enter values for x and y.
Use cin to take input for both coordinates.
Use the following conditions:
If x > 0 and y > 0, print "Quadrant I".
Else if x < 0 and y > 0, print "Quadrant II".
Else if x < 0 and y < 0, print "Quadrant III".
Else if x > 0 and y < 0, print "Quadrant IV".
Else if x == 0 and y == 0, print "Origin".
Else if x == 0, print "Point lies on Y-axis".
Else if y == 0, print "Point lies on X-axis".
End the program with return 0.

Program3(3)
Aim:
To write a C++ program that takes marks of three subjects as input, calculates the total, and displays the grade according to defined grading criteria.

Theory:Grading systems are commonly used in education to assess student performance. In this program:
The user inputs marks for three subjects.
The total sum of marks is calculated.
The grade is determined based on the total marks using conditional statements.
The program uses:
cin for taking user input.
cout to display messages and the resulting grade.
if-else if-else ladder to evaluate the sum and assign a corresponding grade.
Grading Logic Used:
If total > 90 → Grade A+
Else if total > 80 → Grade B+
Else if total > 75 → Grade B
Else if total > 60 → Grade C
Else → Grade F
This approach demonstrates decision-making using conditional structures and basic arithmetic operations.

Algorithm:

Start the program.
Include the header file #include <iostream> and use the std namespace.
Declare four float variables: mark1, mark2, mark3, and sum.
Prompt the user to enter marks for subject 1, subject 2, and subject 3.
Use cin to input all three marks.
Calculate the total using sum = mark1 + mark2 + mark3.
Use if-else if conditions to assign a grade:
If sum > 90, output "Grade A+".
Else if sum > 80, output "Grade B+".
Else if sum > 75, output "Grade B".
Else if sum > 60, output "Grade C".Else, output "Grade F".
End the program with return 0.
