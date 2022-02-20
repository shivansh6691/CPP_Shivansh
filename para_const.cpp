
#include<iostream>
using namespace std;

class A{
  public:
            int i=0;
  public:

    
            //PARAM CONSTRUCTOR
            A(int x,int y){
                cout<<"Inside param const"<<endl<<endl;
                i=x+y;
                cout<<"Value of i is now: "<<i<<endl;
            }
            

};

int main()
{

    A ob1(5,10);

    
    return 0;
}
