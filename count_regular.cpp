#include <iostream>
using namespace std;

class Demo
{
private:
int count;
public:
void getcount()
{
    count=0;
    cout<<"cout = "<< ++count;
}
};
    

int main() 
{
    Demo d1,d2,d3;
    d1.getcount();
    d2.getcount();
    d3.getcount();
	return 0;
}
