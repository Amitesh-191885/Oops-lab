#include<iostream>
#include<string>

using namespace std;

class STRING{
  private:
  char val1[101];
  char val2[101];

  public:

  void Store(){
    cout<<"Enter First word: ";
    cin>>val1;
    cout<<"Enter second Word: ";
    cin>>val2;
    cout<<"Strings are stored."<<endl;
  }

  void getString(){
    cout<<"string 1 "<<val1<<endl;
    cout<<"string 2 "<<val2<<endl;
  }

  void AddString(){
    cout<<val1<<val2;
  }

  void EquatString(){
    int i,flag =0;
    for(i=0;val1[i] != '\0'; i++){
      if(val1[i] != val2[i]){
        flag = 1;
        break;
      }
    }

    if(flag == 0){
      cout<<"Both strings are same"<<endl;
    }
    else{
      cout<<"Both strings are different."<<endl;
    }
  }
};
int main(){
  STRING ST;
  ST.Store();
  ST.getString();
  cout<<"\n\n";
  cout<<"Concatnated Data: ";
  ST.AddString();
  cout<<endl;
  ST.EquatString();
  return 0;
}