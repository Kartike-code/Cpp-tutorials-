// ***********************BREAK AND CONTINUE STATEMENTS***********************

// 1.Break statements:- Break statements in loops are used to terminate the 
// loops.
// 2. Continue statements:- Continue statements are somewhat similar to 
// break statements, but the main difference b/w the 2 is that the break
// statements terminate the entire loop, whereas continue statements 
// terminate only the current iteration and then the rest of the loop 
// goes on.

// #include<iostream>

// using namespace std;

// int main(){
//     for(int i = 0; i <= 100; i++){   
//         if(i==41){
//             break;
//         }
//         cout<<i<<endl;
//     }
//     for (int i = 0; i <= 100; i++)
//     {
//         if(i==40){
//             continue;
//         }
//         cout<<i<<endl;
//     }
//     return 0;
// }

// **************************NESTED FOR LOOPS***************************

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    // 1. Code for the following pattern:- *
    //                                     **
    //                                     ***
    //                                     ****
    //                                     *****
    // for(int i = 1; i<=n; i++)
    // {
    //     for(int j = 1; j<=i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // 2. Code for the following pattern:-     *
    //                                        **
    //                                       ***
    //                                      ****
    //                                     *****
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if(j<=n-i)
    //         {
    //             cout<<" ";
    //         }
    //         else
    //         {
    //             cout<<"*";
    //         }
    //     }    
    //     cout<<endl;
    // }

    // 3. Code for the following pattern:- 1
    //                                     22
    //                                     333
    //                                     4444
    //                                     55555
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    // 4. Code for the following pattern:-     1
    //                                        2 2
    //                                       3 3 3
    //                                      4 4 4 4 
    //                                     5 5 5 5 5   
    // for

    // 5. Code for the following pattern:- 1
    //                                     23
    //                                     456
    //                                     78910
    //                                     1112131415
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<a;
            a++;
        }
        cout<<endl;
    }
    return 0; 
}