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
    
    int add(){
        return input1+input2;
    }
};

int menu()
{
	

}
int main()
{
    
    Calculator obj1;
    obj1.setInput(10,10);
    cout<<"The inputs: "<< obj1.input1 << " " << obj1.input2 << endl;
    cout<<"The sum of numbers = " <<obj1.add();
    return 0;
}
