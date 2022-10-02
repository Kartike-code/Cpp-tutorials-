// *********************FOR, WHILE AND DO-WHILE LOOPS**************************

#include<iostream>

using namespace std;

int main(){
    // Loops in C++
    // There are three types of loops in C++:-
    // 1. For loop
    // 2. While loop
    // 3. Do-while loop
    
    // *********************FOR LOOP IN C++************************
    // Syntax for 'for loop':- 
    // for(initialisation; condition; updation)
    // {
    //     loop body(C++ code);
    // }

    for (int i = 1; i <= 50; i++)
    {
        cout<<i<<endl;
    }

    // Example of infinite for loop:- Here the condition is always true.
    // for (int i = 1; 45<89; i++)
    // {
    //     cout<<i<<endl;
    // 

    // ********************WHILE LOOP IN C++*********************
    // Syntax for 'while loop':-
    // while(condition)
    // {
    //     C++ statements;
    // }

    // Printing 1 to 100 using while loop:-
    // int i = 1;
    // while(i<=100)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    // Example of infinite while loop:-
    // int i = 1;
    // while(50>20)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    // ****************DO-WHILE LOOP IN C++******************
    // Syntax of 'Do-while loop':-
    // do
    // {
    //     C++ statements;
    // }while(condition);
    
    // Printing 1 to 100 using do-while loop:-
    // int i = 1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<=100);

    // Printing multiplication table of 6 using for loop:-
    // for(int a = 1; a<=10; a++)
    // {
    //     cout<<a*6<<endl;
    // }

    // Printing multiplication table of 6 using while loop:-
    // int i = 1;
    // while(i<=10)
    // {
    //     cout<<i*6<<endl;
    //     i++;
    // }

    // Printing multiplication table of 6 using do-while loop:-
    // int i = 1;
    // do
    // {
    //     cout<<i*6<<endl;
    //     i++;
    // }while(i<=10);
    return 0;
}
