#include <iostream>
using namespace std;

class A{
    public:
    int i,j,k,l,m;
    A(){
        cout<<"inside the const"<<endl;
        i=0;
        j=10;
    }
    ~A(){
        cout<<"inside the des"<<endl;
    }
};
int main()
{
        //      DECLARATION OF VARIABLE
        int *ptr1,*ptr2,sum;
        A *a2,*a3;
        ptr1=new int; *ptr1 =5;
        ptr2=new int; *ptr1 =1;
        sum=*ptr1+ *ptr2;
        cout<< "sum is :"<<sum<<endl;
    
    
        // a2 =new A;
        
        // cout<<"sizeof(*ptr1):"<< sizeof(*ptr1)<<endl;
        // cout<<"sizeof(ptr1):"<< sizeof(ptr1)<<endl;
        // cout<<"sizeof(*a2):"<< sizeof(*a2)<<endl;
        // cout<<"sizeof(a2):"<< sizeof(a2)<<endl; 
       
       
    //   int arr[5];
       int *arr=new int[5];
       
       a3=new A [4];
       
       delete ptr1;
       delete ptr2;
       delete arr;
       
       delete [] a3;
       
        //*a2=5;
    return 0;
}

