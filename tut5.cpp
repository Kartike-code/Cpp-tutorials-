// *************************BASIC INPUT AND OUTPUT IN C++***********************

// C++ language comes with different libraries which helps us to perform
// input/output operations. In C++ sequence of bytes corresponding to input
// and output are known as streams.
// There are two types of streams:-
// 1.Input streams:- In the input stream, the direction of flow of bytes is
// from an input device(e.g. a keyboard) to the main memory.
// 2.Output streams:- In the output stream, the direction of flow of bytes 
// is from the main memory to an output device(e.g. a display).

# include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter the value of num1:\n"; /* '<<' is called Insertion Operator */
    cin>>num1; /* '>>' is called Extraction Operator */
     
    cout<<"Enter the value of num2:\n"; /* '<<' is called Insertion Operator */
    cin>>num2; /* '>>' is called Extraction Operator */
    
    cout<<"The sum is " << num1+num2;
    return 0;
}
