#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 10, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool swapped = false;
    cout << "Original Array: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int pass = 0; pass < n - 1; pass++)
    {
        swapped = false;
        for (int i = 0; i < n - pass - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        if(swapped == true)
        {
            break;
        }
    }
    cout << "Sorted array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
/* 
Time Complexity :
Worst Case:  O(n*n)
Best Case: O(n)... when array is already sorted or almost sorted
Space Complexity : O(1)
 */