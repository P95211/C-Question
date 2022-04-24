#include<iostream>
using namespace std;
bool checkPrimeNumber(int);

int main() {
    int n;
    cout<<"Enter a Positive integer:";
    cin>> n;

    if (checkPrimeNumber(n))
        cout<< n << "is a prime number.";
    else
        cout<< n <<"is not a prime number.";
    return 0;        
}

bool checkPrimeNumber(int n) {
    bool isprime = true;

    if (n==0 || n== 1){
        isprime = false;
    }
    else{
        for (int i =2; i <=n/2;++i) {
            if (n%i ==0){
                isprime=false;
                break;
            }
        }
    }
    return isprime;



}