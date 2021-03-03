/* Write a function power() which raise a number m to
a power n. The function takes double values of m and
integer value of n and returns the result. Use a default
value of n as 2.
*/

#include<iostream>
#include<iomanip> // This header file for setprecision.
using namespace std;

double power (int p, double num) {
    if(p!=0) {
        return (num*power (p-1,num));
    }
           else
               return 1;
}

int main() {
    int power_num=2;
    double number, result;

    cout<<"Enter your number. \n";
    cin>> number;

    cout<<"Your number is "<<number;

    cout<<"\nNow "<<number<<"^"<<power_num<<" = ";

    result = power(power_num, number);
    cout<< setprecision(4) << result;

    return 0;
}
