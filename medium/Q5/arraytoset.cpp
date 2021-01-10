#include<iostream>
#include<set>
using namespace std;
void convertset(int arr[], int n) //function to add array elements to set and print it
{
    set <int> common;
    for (int i = 0; i < n; i++)
        common.insert(arr[i]); 
   for (auto i = common.begin(); i != common.end(); i++)
        cout<< *i << " ";  // printing the set elements 
    cout<<endl;
}

int main()
{
    int arr[] = {1,1,3,2,2,3,3,4,5,7,6};
    int length = sizeof(arr) / sizeof(arr[0]);
    convertset(arr,length);
    return 0;
} 

/* Test case 

1 . Input = [1,1,,3,2,2,3,3,5,7,6]
    Output = 1 2 3 4 5 6 7

2 . Input = [1,7,3,6,2,5,4]
    output = [1,2,3,4,5,6,7]

*/