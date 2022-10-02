// ****************************POINTERS******************************

#include<iostream>

using namespace std;

int main(){
    // Pointers:- Pointers are data types(derived) which hold the address
    // of other data types.
    int a = 3;
    int* b = &a;

    // '&' operator is called 'address of' operator.
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of a is "<<&a<<endl;

    // '*' operator is called 'value at' dereference operator.
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to pointer:- c is a pointer which has stored the value of 
    // another pointer b.
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
    return 0;
}