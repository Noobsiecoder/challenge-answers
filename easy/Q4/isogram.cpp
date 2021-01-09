#include<iostream>
using namespace std;
int checkstring(char a[100])
{
    int cnt=0;
    int total[26] = {0};
    while(a[cnt]!='\0')
        cnt++;
    for(int i=0;i<cnt;i++)
    {
        total[a[i] - 'a']++;
        if(total[a[i] - 'a'] > 1)
            return 0;
    }
    return 1;

}
int main()
{
    char a[] = "Hey!";
    char b[] = "moose";
    cout<<checkstring(a);  // 1
    cout<<checkstring(b);  // 0
    

    return 0;

}