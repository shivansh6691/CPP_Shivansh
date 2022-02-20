#include <iostream>
using namespace std;

class Base
{
// private:
 int val1,val2;
public:
 void get(){
    cout<<"Enter two values:"<<endl;
    cin>>val1>>val2;
 }
 friend float mean(Base ob);
};

float mean(Base ob){
    
    return float(ob.val1+ob.val2)/2;
}
    
int main() 
{
    Base ob;
    ob.get();
	cout<<"\n Mean Value is: "<<mean(ob);

	return 0;
}
