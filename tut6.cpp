// *************************HEADER FILES AND OPERATORS***********************

// There are two types of header files:                                                              
// 1. System header files: It comes with the compiler. For e.g.:-
# include<iostream>
//  2. User defined header files: It is written by the programmer. For e.g.:- 
// #include "this.h" .This will produce an error if this.h is not present in the 
// current directory.

using namespace std;

int main(){
    int a = 4, b = 5;
    cout<<"Operators in C++:\n";
    // Operators are used for producing output by performing various types of calculations on 
    // two or more inputs.
    cout<<"Following are the types of operators in C++\n";
    // 1. Arithmetic Operators --> They are used to perform mathematical operations like (+,-,etc.)       
    cout<<"Following are the Arithmetic Operators:-" <<endl;
    cout<<"The value of a+b is "<<a+b <<endl;
    cout<<"The value of a-b is "<<a-b <<endl;
    cout<<"The value of a*b is "<<a*b <<endl;
    cout<<"The value of a/b is "<<a/b <<endl;
    cout<<"The value of a%b is "<<a%b <<endl;
    cout<<"The value of a++ is "<<a++ <<endl;
    cout<<"The value of a-- is "<<a-- <<endl;
    cout<<"The value of ++a is "<<++a <<endl;
    cout<<"The value of --a is "<<--a <<endl;
    cout<<endl;

    // 2. Assignment Operators --> They are used to assign values to variables.
    // float a = 17.98, b = 20.76;
    // char letter = 'k'
    // Here '=' is an Assignment Operator

    // 3. Comparison Operators--> Comparison Operators are used to compare two values.
    cout<<"Following are the Comparison Operators:-" <<endl;
    cout<<"The value of a==b is "<<(a==b) <<endl;
    cout<<"The value of a!=b is "<<(a!=b) <<endl;
    cout<<"The value of a>=b is "<<(a>=b) <<endl;
    cout<<"The value of a<=b is "<<(a<=b) <<endl;
    cout<<"The value of a>b is "<<(a>b) <<endl;
    cout<<"The value of a<b is "<<(a<b) <<endl;
    cout<<endl;

    // 4. Logical Operators --> They are used to compare two expressions.
    cout<<"Following are the Logical Operators:-" <<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is "<<((a==b) && (a<b)) <<endl;
    cout<<"The value of this logical and operator ((a!=b) && (a<b)) is "<<((a!=b) && (a<b)) <<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is "<<((a==b) || (a<b)) <<endl;
    cout<<"The value of this logical or operator ((a!=b) || (a<b)) is "<<((a!=b) || (a<b)) <<endl;
    cout<<"The value of this logical not operator (!(a==b)) is "<<(!(a==b)) <<endl;
    cout<<"The value of this logical not operator (!(a!=b)) is "<<(!(a!=b)) <<endl;
    return 0;
}