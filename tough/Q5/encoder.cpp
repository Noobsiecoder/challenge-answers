#include<iostream>
using namespace std;
int main() 
{
	int num; 
    int po[4]={1,2,4,8}; // an array which is used to calculate the power
	string str;
	num=0;
	string ans="";    // which is used to store the elements 
	int n = 4;        //number of elements in string
    str = "1111";     // given string
	
    for(int i=n-1;i>=0;i-=4)  // loop which identifies the character of the given string
    {
        // calculate the interger value of the given string  
	    num = (str[i]-'0')*po[0] + (str[i-1]-'0')*po[1] + (str[i-2]-'0')*po[2] + (str[i-3]-'0')*po[3];
        // converting the num into the respective character and appending it into the string variable 'ans'
	    ans = char(num+'a') + ans;
	}
	    cout<<ans<<"\n";  // printing the string
		
	return 0;
}

/*  Test case 
1 . Input : 
            lenght of string: 4
            string          : 1111
    output :
            p

2 . Input : 
            lenght of string: 8
            string          : 00001111
    output :
            ap
 
1 . Input : 
            lenght of string: 4
            string          : 1001
    output :
            j
*/
  