
#include<iostream>
using namespace std;

class A{
  public:
            int i=0;
  public:
            
            //DEFAULT CONSTRUCTOR
            
            A()     //function name is same as class name and no return type
            {
                cout<<"inside DEFAULT constructor: "<<i<<endl<<endl;
            }
            
    
            //PARAM CONSTRUCTOR
            A(int x,int y){
                cout<<"Inside param const"<<endl<<endl;
                i=x+y;
                cout<<"Value of i is now: "<<i<<endl;
            }
            
            
            //COPY CONSTRUCTOR
            A(A &ob1){
                 cout<<"\nInside copy const: "<<i<<endl<<endl;
                i=ob1.i;
                
            }
};

int main()
{
    A ob;
    A ob1(5,10);
    A ob2(ob1);
    
    return 0;
}
