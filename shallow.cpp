//	DEMO FOR SHALLOW COPY
#include<iostream>

using namespace std;

class demo{
	int d1,d2,*p;
	
	public:
	demo(){
	p=new int;		
	}
	void setVal(int i,int j,int k){
	d1=i;
	d2=j;
	*p=k 		
	}

	void display(){
	cout<<"Value for d1 "<<d1<<"d2"<<d2<<"pointer"<<*p<<endl;
	}
};

int main(){
demo d;
d.setVal(10,20,30);
d.display();
return 0;
}
