// using recursion
/*
#include<iostream>
using namespace std;
int hcf(int n1, int n2);

int main()
{
    int n1, n2;
    cout<<"Enter two positive integers:";
    cin>>n1>>n2;

    cout<< "H.C.F of" << n1 <<" & "<< n2 << " is: " << hcf(n1,n2);
    return 0;
}

int hcf(int n1, int n2)
{
     if (n2 !=0)
        return hcf(n2,n1%n2);
    else
        return n1;                 
}   */

#include<iostream>
using namespace std;

int main(){
    int n1, n2;

    cout<<"Enter two number:";
    cin >> n1 >> n2;

    while (n1 != n2)
    {
        if(n1 > n2)
        n1 -= n2;
        else
        n2 -= n1;
    }
    cout << "HCF = " << n1;
    return 0;
}    
