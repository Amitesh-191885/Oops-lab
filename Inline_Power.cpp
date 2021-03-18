/* Program-2: WAP to make the use of Inline function. */

#include<bits/stdc++.h>
using namespace std;

//Class for power.
class power{
private:
    int power_num;
    double base_num;
public:
    power(){
        power_num = 2;  //Default set.
    }
    void setNum(){
        cout<<"Enter your number: ";
        cin>>base_num;
        cout<<"\n";
    }
    inline void getSquare(){
        cout<<(base_num*base_num);
    }
};

int main(){
    power Default;      //Creating object.
    Default.setNum();
    cout<<"Now square of that number is: ";
    Default.getSquare();
    cout<<"\n";
    return 0;
}
