/* Program-2: WAP to make the use of Inline function. */

#include<bits/stdc++.h>
using namespace std;
/* Global variable Declaration. */
double num;
double power=2.0;
/* Function Declaration */
inline double POWER();      //Inline function of power.
void Input(bool flag);      //Input function for user.

int main(){
  bool flag;
  cout<<"Press '1' if square your number else press '0'. "<<"\n";
  cin>>flag;
  if(flag==1){
    Input(flag); //Function call 
  }
  else
  Input(flag); //Function call
  return 0;
}
//Input Function defination.
void Input(bool flag){
  cout<<"Enter Your number: ";
  cin>>num;
  if(flag==0){
    cout<<"Enter your power number: ";
    cin>>power;
    cout<<"Now "<<num<<"^"<<power<<" = "<<POWER(); //Inline Function call for user power i.e. what they type.
  }
  else
  cout<<"Now "<<num<<"^"<<power<<" = "<<POWER(); //Inline Function call for Default power i.e. 2.

}

// Inline Power function defination
inline double POWER(){
  return pow(num,power);
}