#include<iostream>
using namespace std;

int main(){
    int arrone[50], arrtwo[50], arrmerge[100];
    int sizeone, sizetwo, i, k;
    cout<<"Enter the size of first array:";
    cin>>sizeone;
    cout<<"Enter"<<sizeone<<"Elements for first array:";
    for ( i = 0; i < sizeone; i++)
    {
        cin>>arrone[i];
        arrmerge[i]=arrone[i];
    }
    k=i;
    cout<<"\nEnter the size of second array:";
    cin>>sizetwo;
    cout<<"Enter"<<sizetwo<<"elements for second array:";
    for ( i = 0; i < sizetwo; i++)
    {
        cin>>arrtwo[i];
        arrmerge[k]= arrtwo[i];
        k++;
    }
    cout<<"\nThe new array(mergerd array):\n";
    for ( i = 0; i < k; i++)
    {
        cout<<arrmerge[i]<<" ";
        cout<<endl;
    }
    
    
    return 0;
}