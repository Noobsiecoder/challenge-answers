#include<iostream>
using namespace std;
void merge(int a[],int l,int h,int mid) //function which merge array in sorted order 
{
    int i = l,j = mid +1,k = l;
    int c[100];
    while(i<= mid && j<= h)
    {
        if(a[i] < a[j]) //comparing two half of array
            c[k++] = a[i++]; // storing that minimum element in array 'c'
        else
            c[k++] = a[j++]; // storing that minimum element in array 'c'
    }
    while( i<= mid)
        c[k++] = a[i++]; // loop which is used to store the remaining elements from starting to middle of array 'a' in array 'c'
    while(j <= h)
        c[k++] = a[j++]; // loop which is used to store the remaining elements from to middle to end of array 'a' in array 'c'
    for(i = l; i<k;i++)
        a[i] = c[i]; // replace all elements of 'a'
}
void merging(int a[],int l,int h)
{
    int mid;
    if(l < h)
    {
        mid = (l+h)/2;    //divide the array at mid and sort independently using merge sort
        merging(a,l,mid);
        merging(a,mid+1,h);
        merge(a,l,h,mid); // merge or conquer sorted array
    }
}
int main()
{
    int a[] = { 1,3487,4772,6972,42,3,1};
    int lenght = sizeof(a) / sizeof(a[0]);
    merging(a,0,lenght-1);
    cout<<"Sorted array :";
    for(int i=0;i<lenght;i++) // printing the sorted elements 
         cout<<a[i]<<" ";
    return 0;
}



/*  test case

1 . Input a[] = [1,3487,4772,6972,42,3,1]
    output = 
    Sorted array :1 1 3 42 3487 4772 6972

2 . Input a[] = [101,10,2,43,12,54,34,64,89,76]
    output = 
    Sorted array :2 10 12 34 43 54 64 76 89 101

*/


