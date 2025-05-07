#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 0, 1, 2, 0, 1, 3};
    int n = 7;

    // Create a new array to store the non-zero elements
    int narr[7] = {0};

    int j = 0;  // Pointer for placing non-zero elements

    // Move all non-zero elements to the front of narr
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            narr[j] = arr[i];
            j++;
        }
    }

    // Print the modified array
    for(int i = 0; i < n; i++)
    {
        cout << narr[i] << " ";
    }
    return 0;
}
