#include<iostream>
#include<string>

using namespace std;

class STRING{
  private:
  string val1;
  string val2;
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
    cout<<val1+val2;
  }
  
  bool EquatString(){
    if(val1.compare(val2)){
      return true;
    }
    else
    return false;
  }

};

int main(){
  STRING s;
  s.Store();
  s.getString();
  cout<<"\n\n";
  cout<<"Concatnated Data: ";
  s.AddString();
  cout<<"\n";
  cout<<"compared string: ";
  cout<<s.EquatString();
  return 0;
}