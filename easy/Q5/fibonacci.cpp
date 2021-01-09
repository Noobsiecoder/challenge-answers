#include <bits/stdc++.h>

// Function to calculate the fibonacci series upto {size} given
void fibonacci_series(int arr[], int size)
{
    int nth_term, term1 = 0, term2 = 1;
    for (int i = 0; i < size; i++)
    {
        arr[i] = term1;
        nth_term = term1 + term2;
        term1 = term2;
        term2 = nth_term;
    }
}

int main()
{
    // Array {arr} to store fibonacci series
    int size = 7, arr[size] = {}, check_array[] = {0, 1, 1, 2, 3, 5, 8};
    fibonacci_series(arr, size);
    std::cout.setf(std::ios::boolalpha); // Format flag used for printing true/ false and not 1/0 respectively
    /* Test case */
    bool check_case = false; 
    for (int i = 0; i < size; i++)
        // To check if both array's element is unequal, if the condition satisfies, it returns false
        if (arr[i] != check_array[i])
            check_case = false;
        else
            check_case = true; // Inside for loop
        
    // If the condition doesn't satisfy above, it means all the elements are equal, hence returns true
    std::cout << check_case << std::endl;
    return 0;
}