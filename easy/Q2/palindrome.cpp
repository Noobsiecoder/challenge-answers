#include<iostream>
#include<stdio.h>
using namespace std;
int  str(char *a)
{
    int cnt = 0,flag = 0;
    while(a[cnt]!='\0')
        cnt++;
    int low =0;
    int high = cnt - 1;
    for(;high > low;)
    {
        if(a[high] != a[low])
        {
            flag = 1;
            return 0;
        }   
        low++;
        high--;
    }
    if(flag == 0)
    {
        return 1;
    }
}
int number(int n)
{
    int rev = 0 , rem = 0;
    int ori = n;
    while(n!=0)
    {
        rem = n%10;
        rev = rev * 10 + rem;
        n = n /10;
    }
    if(ori == rev)
        return 1;
    else
        return 0;
}
int main()
{
    char a[] = "Madam";
    char b[] = "Radiator";
    cout<<str(a);           // 1
    cout<<str(b);           // 0
    cout<<number(12421);    // 1
    cout<<number(1234);     // 0
    return 0;   
}