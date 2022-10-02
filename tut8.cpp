// ******************CONSTANTS, MANIPULATORS AND OPERATOR PRECEDENCE**********************

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a = 10;
    cout<<"The value of a was: "<<a<<endl;
    a = 8;
    cout<<"The value of a is: "<<a;
    
    // *************Constants in C++**************
    const int a = 10;
    cout<<"The value of a was:"<<a<<endl;
    a = 8;
    cout<<"The value of a is:"<<a;
    // The keyword 'const' keeps the value ,i.e., literal of a variable constant.
    // It will show an error because a is constant.

    // ****************Manipulators in C++***************
    int a = 3, b = 78, c = 1264;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;
    cout<<"The value of a with setw is: "<<setw(4)<<a<<endl;
    cout<<"The value of b with setw is: "<<setw(4)<<b<<endl;
    cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;
    // In C++ language programming Manipulators are used in the formatting of output.
    // The two most commonly used manipulators are:-
    // 1. 'endl':- It is used for obtaining a next line in the output.
    // 2. 'setw':- It is used to specify the width of the output.

    // ********Operator Precedence and Operator Associativity*********
    int a = 3, b = 4;
    int c = a*5+b;    
    cout<<"The value of c is: "<<c<<endl;
    int d = ((((a*5)+b)-45)+87);
    cout<<"The value of d is: "<<d;                                                
}