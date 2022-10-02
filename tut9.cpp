// ***************C++ CONTROL STRUCTURES, IF-ELSE AND SWITCH-CASE STATEMENTS************

// Control structures:-The work of control structures is to give flow and logic to a 
// program.
// There are 3 types of control structures:-
// 1. Sequence structure:- Sequence structure refers to the execution of the instructions
// one after the other.
// 2. Selection structure:- Selection structure refers to the execution of the instructions
// according to a condition, which can be either true or false.
// There are 2 ways of implementing selection structure:- "if-else" and "switch-case statements".
// 3. Loop structure:- Loop structure refers to the execution of the instructions in a loop one
// after the other till the condition gets false.

#include<iostream>

using namespace std;

int main(){
    // cout<<"This is tutorial 9.";
    int age;
    cout<<"Tell me your age: ";
    cin>>age;

    // 1. Selection control structure:- if else-if else-if else ladder
    if((age<18) && (age>0)){
        cout<<"You cannot come to the party"<<endl;
    }
    else if(age==18){
        cout<<"You are a kid and you will get a kid pass to come to the party"<<endl;
    }
    else if((age>18) && (age<60)){
        cout<<"You can come to the party";
    }
    else if((age>60) && (age<120)){
        cout<<"You are too old to come to the party";
    }
    else{
        cout<<"You dont exist";
    }

    // 2. Selection control structre:- Switch case statements
    // switch (age)
    // {
    // case 18:
    // cout<<"You are an adult"<<endl;
    //     break;
    // case 13:
    // cout<<"You are a teenager"<<endl;
    //     break;
    
    // default:
    // cout<<"You are a person"<<endl;
    //     break;
    // }
    // cout<<"Done with switch case statements";
    // return 0;
}