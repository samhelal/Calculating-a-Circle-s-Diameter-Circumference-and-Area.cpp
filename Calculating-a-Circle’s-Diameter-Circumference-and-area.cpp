/*21. 4.31 (Calculating a Circle’s Diameter, Circumference and
Area) Write a program that reads the radius of a circle (as a
double value) and computes and prints the diameter, the
circumference and the area. Use the value 3.14159 for π.(c++ how to program)*/

#include<iostream>
using namespace std ;

int main(){
    double radius(0) , diameter(0) , circumFerence(0) , area(0) ;

    cout <<"Enter radius :";
    cin >> radius ;
    diameter = 2* radius ;

    cout <<"The Diameter is :"<< diameter <<endl;

    circumFerence = diameter * 3.14159 ;

    cout <<"The Circumference is :"<< circumFerence <<endl;

    area = radius*radius*3.14159;

    cout <<"The Area is :"<< area <<endl;




}