#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    // TIME CONPLEXITY: O(2^n)
    // SPACE CONPLEXITY: O(n)
    // WHY?
    // Because there are some functions which are being called again and again

    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}

//  So how can we improve the time complexity?
// We can use memoization
// Memoization is a technique where we store the results of a function in a cache
// So that we don't have to compute the same result again and again
//  Let's see how it works

int fibonacci_memoization(int n, int *fib_array)
{
    // TIME CONPLEXITY: O(n)
    // SPACE CONPLEXITY: O(n)

    if (n <= 1)
    {
        return n;
    }

    if (fib_array[n] != -1)
    {
        return fib_array[n];
    }

    fib_array[n] = fibonacci_memoization(n - 2, fib_array) + fibonacci_memoization(n - 1, fib_array);
    return fib_array[n];
}

int main()
{
    int n;
    cin >> n;
    int fib_array[n + 1];
    memset(fib_array, -1, sizeof(fib_array));
    cout << fibonacci_memoization(n, fib_array) << endl;
    // cout << fibonacci(5);
    return 0;
}