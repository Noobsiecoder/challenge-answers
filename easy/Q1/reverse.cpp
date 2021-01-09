#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n = 1234; 
    char a[] ="Hello ,World";
    int cnt = 0;
    int rem = 0 , rev = 0;
    for(;n!=0;n=n/10)
    {
         rem = n%10;
         rev = rev*10 + rem;
    }
    cout<<rev;  // 4321
    while (a[cnt]!='\0')
        cnt++;
    char temp;
    for(int i=0;i<cnt/2;i++)
    {
        temp = a[i];
        a[i] = a[i-cnt-1];
        a[i-cnt-1] = temp;
    }
    cout<<a;   //dlroW ,olleH
    return 0;
}