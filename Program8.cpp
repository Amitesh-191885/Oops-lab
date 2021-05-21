#include<bits/stdc++.h>
using namespace std;

/* Abstract class */
class Shape{
  public:
  virtual void numberOfSides() = 0;
};

class Triangle: public Shape{
  public:
  void numberOfSides(){
    cout<<"In triangle there are 3 Sides."<< endl<<endl;
  }
};

class Trapezoid: public Shape{
  public:
  void numberOfSides(){
    cout<<"In Trapezoid there are 4 Sides."<< endl<<endl;
  }
};

class Hexagon: public Shape{
  public:
  void numberOfSides(){
    cout<<"In Hexagon there are 6 Sides."<< endl<<endl;
  }
};

int main(){
  /* One poitnter to access more derived class */
  Shape *ptr = new Triangle();
  ptr->numberOfSides();

  ptr = new Trapezoid();
  ptr->numberOfSides();

  ptr = new Hexagon();
  ptr->numberOfSides();

  return 0;
}

  /*Shape sp;
  sp.numberOfSides();

  Triangle obj;
  obj.numberofsides();

  Trapezoid obJ;
  obJ.numberofsides();

  Hexagon Obj;
  Obj.numberofsides();

  return 0;
}
*/