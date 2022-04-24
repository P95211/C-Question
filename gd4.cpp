#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0,i;
    cout<<"Enter the range of number:";
    cin>>n;

    for(i=1,i<=n;i++;)
    {
        if(i%2==0)
           sum=i;
        else
        sum+=i;   
    }
    cout<<"The sum of the series="<<sum;
}