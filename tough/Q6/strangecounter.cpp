#include <bits/stdc++.h>

// Function to calculate the value at the given time
long int strange_counter(long long time)
{
    long long value = 2;
    while (3 * (value - 1) < time)
        value *= 2;
    return (3 * (value - 1) - time + 1);
}

int main()
{
    std::cout.setf(std::ios::boolalpha);                            // Format flag used for printing true/ false and not 1/0 respectively
    std::cout << (strange_counter(4) == 6) << std::endl;            // true
    std::cout << (strange_counter(65) == 29) << std::endl;          // true
    std::cout << (strange_counter(1234321) == 338541) << std::endl; // true
    return 0;
}