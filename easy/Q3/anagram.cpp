#include<iostream>
using namespace std;
void number(int n,int total[])
{
    int rem = 0;
    while(n)
    {
        rem = n % 10;
        total[rem]++;
        n = n/10;
    }
}
int areAnagram(char *a, char *b)
{
    int count[256] = { 0 };
    int i;
    for (i = 0; a[i] && b[i]; i++) 
    {
        count[a[i]]++;
        count[b[i]]--;
    }
    if (a[i] || b[i])
        return 0;
    for (i = 0; i < 256; i++)
        if (count[i])
            return 0;
    return 1 ;
}
 
int check(int a,int b)
{
    int num1[10] = {0};
    int num2[10] = {0};
    number(a,num1);
    number(b,num2);
    for(int i=0;i<10;i++)
    {
        if(num1[i] !=num2[i])
        {
            return 0;
        }   
    }
    return 1;
}
int main()
{
    cout<<areAnagram("maMba","bamam");   // 1
    cout<<areAnagram("maMba","memba");   // 0
    cout<<check(1234,1423);              // 1   
    cout<<check(1234,2315);              // 0
   
    return 0;
    
}