        // OPERATOR OVERLOADING USING FRIEND FUNCTION
#include<iostream>
using namespace std;

class Complex{
    public:
    int real,img;
    
        Complex()
        {
            real=0;
            img=0;
        }
        Complex(int r,int i){
            real=r;
            img=i;
        }
        void display()
        {
            cout<<"Real: "<< real << " Image: "<< img << endl;
        }
        
        friend Complex operator + (Complex,Complex);
};

Complex operator +(Complex obj1, Complex obj2){
    Complex temp;
    
    temp.real=obj1.real+obj2.real;
    temp.img=obj1.img+obj2.img;
    return temp;
}

int main(){
    Complex c1(1,1), c2(3,3);
    c1.display();
    c2.display();
    
    Complex c3;
    
    c3=c2+c1;
    c3.display();
    
    return 0;
}
