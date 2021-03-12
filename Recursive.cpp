/* Assignment-1: WAP using recursive function to calculate the factorial of a given number.
   Also draw the recursion tree for the test values taken in the program. */

#include<iostream>
using namespace std;

long long int factorial(long long int number){
   return (number==0) ? 1 : (number*factorial(number-1));
}

int main(){
    long long int number;
    cout<<"Enter your number: \n";
    cin>>number;
    cout<<"Your number is "<<number<<" \n";
    cout<<"Now "<<number<<"! = "<<factorial(number);
    return 0;
}
