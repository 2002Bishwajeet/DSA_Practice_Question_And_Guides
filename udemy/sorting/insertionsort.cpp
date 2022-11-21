#include <iostream>

using namespace std;
// Insertion sort
//  Number of passes = n-1 for n elements
//  Maximum comparisons = n-1 for n elements
//  Maximum swaps = n-1 for n elements
//  Number of comparisons and swaps (for n elements) =  1 + 2 + 3 + ... + (n-1) = n(n+1)/2
//  So Time complexity is O(n^2) cause number of comparisons is a polynomial

///// WORKING
/*  */

void insertionSort(int ar[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int x = ar[i];
        while (j > -1 && ar[j] > x)
        {
            ar[j + 1] = ar[j];
            j--;
        }
        ar[j + 1] = x;
    }
}

int main()
{
    int ar[] = {8, 5, 7, 9, 12, 45, 9};
    insertionSort(ar, 7);
    cout << ar;
    return 0;
}