#include <iostream>
using namespace std;
int main()
{
    float *p =new float;
    *p=55;
    cout<<"value="<<*p;
    cout<<"\nadd= "<<p;
    cout<<"\nsize"<<sizeof(*p);
    cout<<"\nsize"<<sizeof(p);
    cout<<"\nsize"<<sizeof(&p);
    return 0;
}

