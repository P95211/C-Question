// using recursion
/*
#include<iostream>
using namespace std;

int factorial(int n);
int main(){
    int n;
    cout<<"enter a positive integer:";
    cin>>n;
    cout<<"factorial of"<<n<<"="<<factorial(n);
    return 0;
}
int factorial(int n){
    if(n>1)
    return n* factorial(n-1);
    else 
    return 1;
}  */

// using iteration

#include<iostream>
using namespace std;

int factorial(int n){
    int result=1;
    for (int i = 1; i <=n; i++)
    {
        result=result*i;
    }
    return result;
}
int main(){
    int num;
    cout<<"Please enter a number to find its factoiral:";
    cin>>num;

    if(num<0)
    {
        cout<<"\nimpossible to find factorial";
    }
    else{
        cout<<"\nfactorial is:"<<factorial(num);
    }
    return 0;
}