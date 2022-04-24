#include<iostream.h>
#include<conio.h>
#define SWAP(a,b) {int temp; tem p=a; a=b; b=temp;}

void main()
{
    
    int x,y;
    cout<<"Enter two number:";
    cin>>x>>y;
    cout<<"x="<< x <<"y=" <<y;
    SWAP(x,y);
    cout<<"x="<<x<<"y="<<y;
    getch();
}