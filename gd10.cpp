/* 10-- 1 //

#include<iostream>;
using namespace std;

int main()
{
    int arr[10],i;
    cout<<"Enter any 10 number:";
    for ( i = 0; i < 10; i++)
        cin>>arr[i];
    cout<<"\nEven number are:\n";
    for ( i = 0; i < 10; i++)
    {
        if(arr[i]%2==0)
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
*/
// 10-- 2//

/*#include<iostream>;
using namespace std;

int main()
{
    int arr[10],i;
    cout<<"Enter any 10 number:";
    for ( i = 0; i < 10; i++)
        cin>>arr[i];
    cout<<"\nOdd number are:\n";
    for ( i = 0; i < 10; i++)
    {
        if(arr[i]%2 !=0)
           cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}*/

// 10--3//


/* #include<iostream>
using namespace std;

int main(){
    int i,n;
    double sum=0, average= 0;
    cout<<"\n\n Enter the number integer you want in an array:";
    cin>>n;
    int arr[n];
    cout<<"\n\n Enter"<<n<<"integer into an array:\n\n";

    for ( i = 0; i < n; i++)
    {
        cout << "Enter arr["<<i<<"]:";
        cin>>arr[i];
    }
    cout<<"\n\n The elements of the array are: \n\n";

    for ( i = 0; i < n; i++)
    {
        cout<<"arr["<<i<<"]="<<arr[i]<<endl;
        sum += arr[i];
    }

    average = sum/n;
    cout<< "\n\n The sum of the elements of the array is:"<< sum << "\n\n";
    cout<< "\n\n The average of the elements of the array is:" << average <<"\n\n";
    cout<< "\n\n";
    
    return 0;
    
} */

// 10--4//
/*#include<iostream>
using namespace std;
void getMinMax(int arr[], int N){
    int Max = arr[0], Min= arr[0];
    for (int i = 1; i < N; i++)
    {
        if(Max < arr[i])
           Max =arr[i];
        if(Min> arr[i])
           Min = arr[i];   
    }
    cout<<"Maximum Value ="<<Max<<"\n";
    cout<<"Minimum Value ="<<Min; 
    
}
int main(){
    int arr[] ={2,1,6,9,4,10,15,21};
    int N =8;
    getMinMax(arr,N);
    return 0;
}  */

 // 10--5//


/* #include<iostream>
 using namespace std;
 
 int remove_duplicates(int arr[], int n)
  { 
     if (n==0 || n ==1)
         return n;
    int temp[n];

    int j = 0;
    int i;
    for (int i = 0; i <n-1; i++)
    if(arr[i] != arr[i+1])
        temp[j++] = arr[i];
        temp[j++] = arr[n-1];

    for ( i = 0; i < j; i++)
         arr[i]= temp[i];
    return j;
  }

    int main()
  {
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0;i<n; i++)
  {
      cin>> arr[i];
  }      
      

    n= remove_duplicates(arr,n);

    for ( i = 0; i < n; i++)
    cout<< arr[i] << " ";
     return 0;
 }  */

 // 10 --6//

/* #include<iostream>
 using namespace std;
 
 int main(){
     int input[500], output[500], count, i;
     cout<<"Enter number of elements in array\n";
     cin>>count;

     for ( i = 0; i < count; i++)
     {
        cin>>input[i];
     }
     for ( i = 0; i < count; i++)
     {
         output[i]= input[count-i-1];
     }
     for ( i = 0; i < count; i++)
     {
         cout<< output[i] << " ";
     }
     
     
     return 0;
 }
*/
