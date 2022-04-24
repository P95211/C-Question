#include<iostream>
using namespace std;

int main(){
    int x,y,temp;
    int*a,*b;

    cout<<"Enter two number";
    cin>>x>>y;

    a=&x;
    b=&y;

    temp= *a;
    *a =*b;
    *b= temp;
    
    cout<<"After swap x is:"<<x;
    cout<<"\nAfter swap y is:"<<y;

    return 0;
}