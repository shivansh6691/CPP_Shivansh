#include<iostream>
using namespace std;

class Calculator{
  public:
        int input1;
        int input2;
  
        void setInput(int a,int b){
            input1=a;
            input2=b;
        }
        
        int add(Calculator ob1,Calculator ob2){
            
            return ob1.input1+ob2.input2;
        }
};

int main()
{
    Calculator ob1,ob2;
    ob1.setInput(10,2);
    ob2.setInput(5,5);

    
    cout<<"Result: "<<ob1.add(ob1,ob2);
    return 0;
}
