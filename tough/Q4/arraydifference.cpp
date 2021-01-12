#include<iostream>
using namespace std;
int exists(int c[], int n, int m) //Function which finds whether the given element is present in array b
{
    int i;
    if (n == 0) 
        return 0; 
    for (i=0; i<=n;i++)
        if (c[i]== m) 
            return 1 ; // if element exist returns 1
    return 0; // else returns 0
}

int main()
{
    int a[100]={1,2,3,4,5}, b[100]={}, c[100];
    int m,n;
    int i,j,k;
    m = sizeof(a) / sizeof(a[0]);
    n = sizeof(b) / sizeof(b[0]);
    k=0;
    for (i=0;i<m;i++)               
    {                                
        for (j=0;j<n;j++)                                
        {
            if (a[i]==b[j]) //if there is a common elements 
            {   
                break;                                                    
            }
        }
        if(j==n)
        {
            if(!exists(c,k,a[i])) // checking whether there is no common elements                                              
            {
                c[k]=a[i]; // uncommon elements are stored in array 'c'
                k++;
            }
        }
    }
    cout <<"Difference :";
    for(i = 0;i<k;i++)
        cout<<c[i]<<" "; // printing the difference between two array
    return 0;
}


/* Test case 
1 . Input a[] = [1,2,3,4,5]
          b[] = [1,2,3]
    output : 4 5

2 . Input a[] = [1,2,3,4,5]
          b[] = []
    output : 1 2 3 4 5

*/
