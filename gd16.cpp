// 16-1 //
/*

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Hello";
    int a[] = {1,2,3,4,5};

    for (int i = 0; i < str.length(); i++)
    
        cout << &str[i]<<endl;

    cout<<"*****************"<< endl;

    for (int i = 0; i < 5; ++i)
    
        cout<<&a[i]<<endl;
    
    
    
    
    return 0;
}   */

//  16 -2 //
/*
#include<iostream>
using namespace std;

int main(){
    int index =0;
    int index2 = 0;
    const int SIZE = 10;

    char firststringobj[SIZE], secondstringobj[SIZE], concatstring[50]={'0'};
    cout<<"Enter first string:";
    cin>>secondstringobj;

    cout<<"Enter second string:";
    cin>>secondstringobj;

    while(firststringobj[index] != '\0'){
        concatstring[index] = firststringobj[index];
        index++;
    }
    while(secondstringobj[index2] != '0'){
        index++;
        concatstring[index] =secondstringobj[index2];
        index2++;
    }
    cout<<"\n\n\nConcatenated string:";
       for (int j = 0; j < SIZE+SIZE; j++)
       {
           cout<<concatstring[j];
       }
       cout<<"\n\n\n";
    return 0;
}   */

// 16- 3//


/*#include<iostream>
#include<string.h>
using namespace std;

int main() 
{
    char str[50],str1[50];

    cout<<"Enter first string::";
    gets(str);
    cout<<"\nEnter second string::";
    gets(str1);

    strcat(str,str1);
    cout<<"\nAfter concatenating string::"<<str<<"\n";
    return 0;
}  */

// 16--4//
/*
#include<iostream>
using namespace std;
#include<string.h>

int main(){
    const char
    *str_inp1="Praveenkaswan";
    const char
    *str_inp2="Praveenkaswan";

    cout<<"string 1:"
    <<str_inp1<<endl;
    cout<<"string 2:"
    <<str_inp2<<endl;

    if (strcmp(str_inp1,str_inp2)==0)
    cout<<"\nBoth the input string are equal."<<endl;
    else
    cout<<"The input string are not equal.";
}    */

// 16--5//
/*
#include<iostream>
using namespace std;

int string_length(char* given_string)
{
 int length = 0;
 while (*given_string != '\0'){
     length++;
     given_string++;
 }   

    return length;
}
int main()
{
    char given_string[]="Praveen kaswan will rock";
    cout<<string_length(given_string);
    return 0;
}   */

// 16--6//
/*
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(){
 char s[20];
 int i;
 cout<<"Enter the string in uppercase:";
 cin>>s;

 for ( i = 0; i<=strlen(s); i++)
 {
     if(s[i]>=65 && s[i]<=92)
     {
         s[i]=s[i]+32;
     }
 }
 cout<<"The entered string in lowercase:"<<s;
 return 0;
}   */

// 16--7//
/*
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(){
 char s[20];
 int i;
 cout<<"Enter the string in lowercase:";
 cin>>s;

 for ( i = 0; i<=strlen(s); i++)
 {
     if(s[i]>=97 && s[i]<=122)
     {
         s[i]=s[i]-32;
     }
 }
 cout<<"The entered string in uppercase:"<<s;
 return 0;
}   */

// 16-- 8
/*
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char strng[100];
    int i, vow=0;
    cout<<"Enter the string:";
    cin>>strng;

    for ( i = 0; strng[i]; i++)
    {
        if(strng[i]=='a' || strng[i]=='e' || strng[i]=='i' || strng[i]=='o' || strng[i]=='u' || strng[i]=='A' || strng[i]=='E' || strng[i]=='I' || strng[i]=='O' || strng[i]=='U')
        {
            vow++;
        }
    }
    cout<<"Total number of vowels in a given string are = "<<vow;;
    return 0;
} */

// 16--9
/*
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str[] ="Praveen kaswan is nice person";
    strrev(str);
    cout<<"\n"<<str;
    return 0;
}  */

    