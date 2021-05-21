#include<bits/stdc++.h>
using namespace std;

class Base{
  public:
  Base(){
    cout<<"This is base constructor"<<endl;
  }
  void output(){
    cout<<"This is base class output function."<<endl;
  }
};

class SecondClass{
  public:
  SecondClass(){
    cout<<"This is SecondClass constructor"<<endl;
  }

  void display(){
    cout<<"This is SecondClass display function."<<endl;
  }
};

class MultipleInheritance: public SecondClass, public Base{
  /* This is multiple inherited class */
};

int main(){
  MultipleInheritance obj;
  cout<<"\n";
  obj.output();
  cout<<"\n";
  obj.display();
  return 0;
}