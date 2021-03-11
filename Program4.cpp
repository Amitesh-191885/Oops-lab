/* Que:- write a program to show the effect of default arguments can be alternatively achieved by overloading. */

#include<iostream>
#include<cmath>
using namespace std;

/* Power function with two arguments. */
double power(double base, double power) {
    return pow(base,power);
}

/* Power function with only one arguments. */
double power(double base) {
    return pow(base,2);
}

/* Here is function for display the result. */
void Display(double results) {
    cout<<(float)results<<"\n";
}

int main() {
    double base_num,power_num, result;
    char flag;
    cout<<"Press 'Y' to Square your number. Else press 'N' \n";
    cin>>flag;
    if(flag!='Y') {
        cout<<"Enter Base Number: \n";
        cin>>base_num;
        cout<<"Enter Power Number:\n";
        cin>>power_num;

        result = power(base_num,power_num);
        Display(result);

    }
    else {
        cout<<"Enter Base Number: \n";
            cin>>base_num;
        result = power(base_num);
        Display(result);

    }

    return 0;
}
