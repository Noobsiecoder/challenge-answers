#include<iostream>
using namespace std;
// Function which returns square of sums of elements in array 'a'
long int square(int a[],int length)
{
    int sums=0;
   for(int i=0;i<length;++i)
        sums+=a[i]; // finding the sum of array elements 
    
    long int product =  sums*sums; // finding the square of sums 
    return product;
}
int main()
{
    int a[] = {1,2,3,4,5};
    int length = sizeof(a)/sizeof(a[0]); // finding the lenght of array
    cout<<square(a,length);  // 225
    return 0;
}

/* Test case 
1. Input : a[] = {1,2,3,4,5}
   Output : 225

2. Input : a[] = {6,7,8,9,10}
   Output : 1600
*/
