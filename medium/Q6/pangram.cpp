#include <bits/stdc++.h> 
using namespace std; 

string pangrams(string s) // Function to check whether a given string is panagram or not 
{ 
  
    int cnt = 0; // variable which is used to have number of count of alphabets 
  
    // inbuilt function which is used to convert all the letters into upper case
    transform(s.begin(), s.end(), s.begin(), ::toupper); 
    
    sort(s.begin(), s.end()); // sort the string 
  
    for (int i = 0; i < s.size(); i++) 
    {
        if (s[i] != s[i + 1] && s[i] !=' ') 
            cnt++;       // counting the number of unique elements in the string 
    } 
    
    if (cnt == 26)  // checking whether the string contains all 26 characters 
        return "Yes";  // if it is true returning yes
    else
        return "No";  // else returning no
} 
  

int main() 
{ 
    string str = "We promptly  judged antique ivory buckles for the next prize"; // panagram sentence  
    cout<<pangrams(str)<<endl; 
    string ss =" hello welcome to coding";
    cout<<pangrams(ss);
    return 0; 
}

/*test case

1. Input = "We promptly  judged antique ivory buckles for the next prize"
   output = Yes

2. Input = "hello welcome to coding"
   output = No

*/