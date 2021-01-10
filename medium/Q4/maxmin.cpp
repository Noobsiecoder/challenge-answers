#include<iostream>
#include<math.h>
using namespace std;
// function to find maximum element of array
int max(int arr[] ,int n)
{
    int i;
    int max = arr[0]; // initializing max as first element of array 
    for(i=1;i<n;i++)
    {
        if(arr[i] > max) // comparing every element of array with max if the element is greater then changed
            max = arr[i]; 
    }
    return max;
}

//function to find minimum element of array
int min(int arr[] ,int n)
{
    int i;
    int min = arr[0]; //initializing min as first elements of array 
    for(i=1;i<n;i++) 
    {
        if(arr[i] < min) //comparing every element of array with min if the element is lesser then changed
            min = arr[i];
    }
    return min;
}

// find the square of element
long int square(int n)
{
    long int x = pow(n,2); 
    return x;
}

// finding the cube of element
long int cube(int n)
{
    long int x = pow(n,3); 
    return x;
}

int main()
{
    int arr[] = {1, 3 ,5,7,3,68};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout<<"square max "<<square(max(arr,length))<<endl;
    cout<<"square min "<<square(min(arr,length))<<endl;
    cout<<"cube max "<<cube(max(arr,length))<<endl;
    cout<<"cube min "<<cube(min(arr,length))<<endl;
    return 0;
}


/* test case 

1.  Input = arr[1,3,5,7,3,68]
    output = 
    square max 4624
    square min1
    cube max 314432
    cube min 1

2.  Input = arr[2,3,4,5,6]
    output = 
    square max 36
    square min 4
    cube max 216
    cube min 8
*/
