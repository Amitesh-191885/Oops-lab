/* Program 3: Write a function Power() which raise a number m to a power n. The
function takes double value of 'm' and integer value of 'n' and returns the result. 
use a default values of 'n' is '2' to make the function to calculate squares when 
this argument is omitted. */

#include<iostream>
using namespace std;

double power(double base_num, int power_num = 2){
  return (power_num!=0) ? (base_num*power(base_num,(power_num-1))) : 1;
}

int main(){
  int power_num;
  double number;
  char flag;
  cout<<"Press 'Y' to square your number else press 'N' \n";
  cin>>flag;
  if(flag!='Y'){
    cout<<"Enter your number: ";
    cin>>number;
    cout<<"\nEnter Power number: ";
    cin>>power_num;
    cout<<"Now "<<number<<"^"<<power_num<<" = ";
    cout<< power(number,power_num);
  }
  else{
    cout<<"Enter your number: ";
    cin>>number;
    cout<<"Now "<<number<<"^2 = ";
    cout<< power(number);
  }
  return 0;
}