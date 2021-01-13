#include<iostream>
#include<map>
#include<unordered_map>
#include<iterator>
using namespace std;
string decrypt(string str) // Function used to decrypt the given data
{
    for(int i=0;str[i]!='\0';i++)
    {
        str[i] = (char)((int)str[i]^(50 + 26 % 97));   // decrypting the given string 
    }
    return str;
}
int main()
{
    map <string,string> contact_info , cracked_data; // Map variables 
    string key,value;

    //Encrypted data
    contact_info["*%>?8\"-!)"] = "#$\"";
    contact_info[" -?8\"-!)"] = "#)";
    contact_info[")!-% "] = "? -5&#$\"(#)< -5)>}tz+!-% b/#!";
    contact_info["<-??;#>("] = "$#;(%(5#9*%\"(%8s";
    
    for(auto x:contact_info)
    {
        key = decrypt(x.first); // Function call which returns the Decrypted key
        value = decrypt(x.second); // Function call wwhich returns the Decrypted value
        cracked_data[key] = value; // Storing the Key and it's value in another map 'cracked_data'
    }
    cout<<"Decrypted data "<<endl;
    for(auto i:cracked_data)
    {
        cout<<i.first<<" -- "<<i.second<<endl; // Printing the decrypted key and it's value
    }
    return 0;
}