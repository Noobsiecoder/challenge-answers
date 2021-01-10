#include<iostream>
#include<set>
using namespace std;
void printUnion(int arr1[], int arr2[], int n, int m) //function to find union of two arrays
{
    set <int> common;
    for (int i = 0; i < n; i++)
        common.insert(arr1[i]); // inserting array arr1 elements in set 'common'
    
    for (int i = 0; i < m; i++)
        common.insert(arr2[i]); // inserting array arr2 elements in set 'common'
  
    for (auto i = common.begin(); i != common.end(); i++)
        cout<< *i << " ";  // printing the set elements 
    cout<<endl;
}
 
void printIntersection(int arr1[], int arr2[], int n, int m) //function to find intersection of two arrays
 {
    set<int> inter;
    int flag =0;
    for (int i = 0; i < n; i++)
        inter.insert(arr1[i]);  // inserting array arr1 elements in set 'inter'
    for (int i = 0; i < m; i++)
    {
        if (inter.find(arr2[i]) != inter.end()) // If element is present in set then printing it
        {   
            cout << arr2[i] << " ";
             flag =1;
        }  
    }
    if (flag == 0)
    {
        cout<<"No common elements";
    }
 }          
 
int main()
{
    int arr1[] = { 1,2,3,4 };
    int arr2[] = { 5,4,7,8 };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    printUnion(arr1, arr2, n, m);
    printIntersection(arr1, arr2, n, m);
    return 0;
}

/* test case

1 . Input:  arr1 = [1,2,3,4]
            arr2 = [5,4,7,8]
    Output: 1 2 3 4 5 7 8
            4

2 . Input:  arr1 = [1,2,3]
            arr2 = [5,7,8]
    output: 1,2,3,5,7,8
            NO intersection


*/