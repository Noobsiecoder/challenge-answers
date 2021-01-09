
#include <bits/stdc++.h>
#include<iostream>

using namespace std;
int main() 
{   
    int a[127]={0}; // initialized as 0 inorder to find the count of each letter
	string s="Dad";
	
	// Finding the lenght of the string 
	int x = s.length();
    for(int i=0;i<x;i++)
        a[(char)tolower(s[i]) -'a']++; // find the count of each letter in the string
    
       
    for(int i=0;i<x;i++)
        
        if(a[(char)tolower(s[i])-'a'] > 1) //checking whether the letter is repeated more than once
            
            s[i] = '*';  // converting that letter into a '*'
	
	cout<<s; //M**********
	return 0;
}

/* Test case 
1. Input : "Mississippi"
   Output : "M**********"

2. Input : "Hello dude"
   Output : "H***o *u**"
*/ 

