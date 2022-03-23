#include <iostream>
using namespace std;

class Car{
  public:
  virtual void start(){
      cout<<"Car started"<<endl;
  }
};
class Innova:public Car{
    public:
    void start(){
        cout<<"Innova started"<<endl;
    }
};
class Swift:public Car{
    public:
    void start(){
        cout<<"Swift started"<<endl;
    }
};
int main(){
    Innova i;
    Swift s;
   Car *ptr=&i;    //Car *ptr=new Innova  (another way)
   ptr->start();
   ptr=&s;
   ptr->start();
    return 0;
}

//C++ polymorphism means that a call to a member function will cause a different function to be executed depending on the type of object that invokes the function.