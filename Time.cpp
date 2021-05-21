#include<bits/stdc++.h>

using namespace std;

class TIME{
  private:
  //Atributes: 
  int hour;
  int minute;
  public:
  TIME(){
    hour = 0;
    minute = 0;
  }
  //Parameterised constructor
  TIME(int h, int  m){
    //cout<<"parmeterised consturctor \n";
    hour = h;
    minute = m;
  }
  //Member Function
  void COUT(){
    cout<<"Hour: "<<hour<<endl;
    cout<<"Minute: "<<minute<<endl;
  }
  //Declaration of friend function
  friend TIME ADD(TIME ob1,TIME ob2);

};

//Defenition of friend function
TIME ADD(TIME o1,TIME o2){
  TIME ans((o1.hour + o2.hour),(o1.minute + o2.minute));
  return ans;
}

int main(){
  TIME obj1(12,40);
  TIME obj2(3,10);
  obj1.COUT();
  obj2.COUT();
  TIME ans = ADD(obj1,obj2);
  cout<<"And its addition is: \n";
  ans.COUT();
  return 0;
}