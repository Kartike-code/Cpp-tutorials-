// ****************************VARIABLE SCOPE AND DATA TYPES**************************

// RULES TO DECLARE VARIABLES:-
// 1.Variable name in C++ can range from 1 to 255 characters.
// 2.No spaces, special characters or C++ keywords are allowed to use.
// 3.Variable names should start with the letter of an alphabet or an underscore(_), 
// but after that we can also use numbers.
// 4. Variable names are case sensitive.

// 1. Data types:- Data types define the type of data that a variable will hold.
// Data types are categorized into 3 types:-
// (i) Built-in data types:- int, float, double, char, bool.
// (ii) User-defines data types:- struct, union, enum.
// (iii) Derived data types:- array, pointer, function.

// 2. Variable Scope:- The scope of a variable is the region in a program in which the 
// existence of that variable is valid.
// Based on scope variables can be classified into two types:-
// (I) Local variables:- Local Variables are declared inside the braces of a function
// and can be accessed only from there.
// (II) Global variables:- Global variables are declared outside the braces of any function
// and can be accessed from anywhere.
// Note:- In case there is a local and a global variable with a same name then precedence
// will be given to the local variable.

# include<iostream>

using namespace std;

int glo = 6;
void sum(){
    cout<< glo;
}
int main(){
    int glo = 78;
    float a = 17.9, b = 20.6;
    double c = 44.999988;
    int d = 45;
    char letter ='K' ;
    bool statement = true;
    sum();
    cout<<glo<<statement;
    // cout<<"This is tutorial 3.\n Here the value of a is "<<a<<". Here the value of b is "<<b<< ". ";
    // cout<<" \n Here the value of c is " <<c<<". Here the value of d is " <<d<<" . Here the value of letter is "
    // <<letter;
    return 0;
}