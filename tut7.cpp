// *********************C++ REFERENCE VARIABLES AND TYPECASTING*******************

#include<iostream>

using namespace std;

int c = 45;

int main(){

    // **********Build in Data Types**********
    int a, b, c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    c = a + b;
    cout<<"The sum is "<<c <<endl;
    cout<<"Value of global c is "<<::c;
    // Where '::' is called Scope Resolution Operator.
    // It helps to print the value of a Global variable.

    // ********Float, Double and Long Double Literals*********
    float d = 34.4f;
    double e = 34.4;
    long double f = 34.4l;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e
    <<endl<<"The value of f is "<<f<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4 is " <<sizeof(34.4) <<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    // ************Reference Variables***********
    // Reference variable can be defined as another name for an already existing 
    // variable, keeping the data type and literal same.
    // For e.g.:- Rohan Das ---> Monty ---> Rohu ----> Dangerous Coder, 
    // all these names denote a single person.
    float x = 455;
    float & y = x;
    cout<<x <<endl; 
    cout<<y <<endl;

    // ************Typecasting*****************
    // Typecasting can be defined as converting one data type into another
    // (by keeping the name of the variable and literal constant).
    int g = 45;
    float h = 45.46;
    cout<<"The value of a is "<<float(g)<<endl;
    cout<<"The value of a is "<<(float)g<<endl;
    cout<<"The value of b is "<<int(h)<<endl;
    cout<<"The value of b is "<<(int)h<<endl;
    cout<<"The value of b is "<<h<<endl;

    cout<<"The value of a + b is "<<g + h<<endl;
    cout<<"The value of a + int(b) is "<<g + int(h)<<endl;
    cout<<"The value of a + (int)b is "<<g + (int)h<<endl;
    return 0;
}