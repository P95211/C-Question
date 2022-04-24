// using recursion
/*
#include<iostream>
using namespace std;

int fib(int x){
    if((x==1)||(x==0)){
        return(x);
    }else{
        return(fib(x-1)+fib(x-2));
    }
}
int main(){
    int x, i=0;
    cout<<"Enter the number of terms of series:";
    cin>>x;
    cout<<"\nFibonacci Series:";
    while(i<x){
        cout<< " "<<fib(i);
        i++;
    }
    return 0;
}  */

#include<iostream>
using namespace std;
void fib(int num){
    int x=0, y=1, z=0;
    for (int i = 0; i < num; i++)
    {
        cout<<x<<" ";
        z=x+y;
        x=y;
        y=z;
    }
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"\nThe fibonnaci series:";
    fib(num);
    return 0;
}