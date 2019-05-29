#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()

{
	//Declaration of variables that is needed
	double base, legA, legB, area, perim, perim1, apothem, circum, a1, a2, a3, angle1, angle2, angle3;
	
	cout << "\t MP PROBLEM 2" << "\n";
	cout << "\t  TRIANGLES" << "\n \n";

	//Make the user input the measurements of the triangle
	cout << "Input the base of the triangle : "; cin >> base;
	cout << "Input a leg of the triangle : "; cin >> legA;
	cout << "Input a leg of the triangle : "; cin >> legB;
	cout << "\n";
	
	//Determining the type of triangle whether it is scalene, isosceles or equilateral
	if (base != legA && legA != legB && base != legB)
	cout << "The triangle is a Scalene Triangle!";
	else if ((base == legA) && (base != legB) && (legA != legB) || (base == legB) && (base != legA) && (legB != legA) || (legA == legB) && (legA != base) && (legB != base))
	cout << "The triangle is an Isosceles Triangle!";
	else if ((base == legA) && (base == legB) && (legA == legB))
	cout << "The triangle is an Equilateral Triangle!";
	
	cout << "\n \n";
	
	//Formulas for determining the area and perimeter of the triangle
	perim1 = (base + legA +legB) / 2;                               
	area= sqrt(perim1 * (perim1 - base) * (perim1 - legA) * (perim1 - legB));
	cout << "The area of the triangle is : " << area << "\n";
	
	perim = (base + legA + legB);
	cout << "The perimeter of the triangle is : " << perim << "\n \n";
	
	//Formulas for determining the type of triangle (acute, right, obtuse)
	a1 = (((legA * legA) + (legB * legB)) - (base * base) / (2 * legA * legB));
	a2 = (((legA * legA) + (base * base)) - (legB * legB) / (2 * legA * base));
	a3 = (((base * base) + (legB * legB)) - (legA * legA) / (2 * base * legB));
	angle1 = acos(a1);
	angle2 = acos(a2);
	angle3 = acos(a3);
	
	//For acute triangle
	if ((angle1 < 90) && (angle2 < 90) && (angle3 < 90) && (angle2 > 0) && (angle3 > 0) && (angle1 > 0))
	cout << "The triangle is an Acute Triangle!";
	
	//For right triangle
	else if ((angle1 = 90) && (angle2 < 90) && (angle3 < 90) && (angle2 > 0) && (angle3 > 0))
	cout << "The triangle is a Right Triangle!";
	else if ((angle1 < 90) && (angle2 = 90) && (angle3 < 90) && (angle1 > 0) && (angle3 > 0))
	cout << "The triangle is a Right Triangle!";
	else if ((angle1 < 90) && (angle2 < 90) && (angle3 = 90) && (angle1 > 0) && (angle2 > 0))
	cout << "The triangle is a Right Triangle!";
	
	//For obtuse triangle
	else if ((angle1 > 90) && (angle2 < 90) && (angle3 < 90) && (angle1 < 180) && (angle2 > 0) && (angle3 > 0) && (angle1 > 0))
	cout << "The triangle is an Obtuse Triangle!";
	else if ((angle1 < 90) && (angle2 > 90) && (angle3 < 90) && (angle2 < 180) && (angle2 > 0) && (angle3 > 0) && (angle1 > 0))
	cout << "The triangle is an Obtuse Triangle!";
	else if ((angle1 < 90) && (angle2 < 90) && (angle3 > 90) && (angle3 < 180) && (angle2 > 0) && (angle3 > 0) && (angle1 > 0))
	cout << "The triangle is an Obtuse Triangle!";
	
	//errors or invalid
	else if (angle1 = 0)
	cout << "ERROR";
	else if (angle2 = 0)
	cout << "ERROR";
	else if (angle3 = 0)
	cout << "ERROR";
	
	//computing the apothem
	apothem =  legA / (2 * tan(180 / 3));  
	cout << "The apothem of the triangle is : " << apothem << "\n";
	
	//computing the circumcenter
	circum = (base * legA * legB) / sqrt((base+ legA+ legB) * (-base + legA + legB) * (base - legA + legB) * (base + legA - legB));
	cout << "The circumcenter of the triangle is : " << circum;
	
	return 0;
}
