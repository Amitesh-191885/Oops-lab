#include<bits/stdc++.h>
using namespace std;

class Length{
private:
    int Len;
public:
    //constructor with zero argument.
    Length(){
        Len = 0;
        cout<<"This is default constructor."<<endl;
    }

    //constructor with one argument. This means constructor overloading.
    Length(int data){
        Len = data;
        cout<<"This is Parameterized constructor"<<endl;
    }

    Length(Length &object){
        Len = object.Len;
        cout<<"This is Copy constructor"<<endl;
    }

    void show(){
        cout<<"Length is :"<<Len<<endl;
    }
};

int main(){
    int i;
    cout<<"Enter length: "<<endl;
    cin>>i;

    Length obj1;
    obj1.show();

    Length obj2(i);
    obj2.show();

    Length obj3(4);
    obj3.show();

    Length obj(obj3);
    obj.show();
return 0;
}