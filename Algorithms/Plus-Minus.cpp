/*Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero.
Print the decimal value of each fraction on a new line with  places after the decimal.*/


/*Here we will see how to print some floating point numbers up to some pre-defined decimal places. 
In C++, we can use setprecision with the cout to do this word. 
This is present under the iomanip header file in C++.*/

//Only the function is included
//For Qn reference check https://www.hackerrank.com/challenges/plus-minus

#include<iomanip>
using namespace std;
void plusMinus(vector<int> arr) {
    double cp = 0, cn = 0, cz = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] > 0)
        {
            cp++;
        }
        else if(arr[i] < 0)
        {
            cn++;
        }
        else 
            cz++;
    }
    cout<<setprecision(6)<<(cp/arr.size())<<"\n";
    cout<<setprecision(6)<<(cn/arr.size())<<"\n";
    cout<<setprecision(6)<<(cz/arr.size())<<"\n";
}

