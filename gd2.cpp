


#include <iostream>
using namespace std;

int main()
{
    int n,reversednumber=0,rem;
    cout <<"Enter an integer:";
    cin>>n;
    
    while (n!=0)
    {rem=n%10;
     reversednumber=reversednumber*10 +rem;
     n/=10;
    }
    cout<<"Reversed number is:"<<reversednumber;
    return 0;
}