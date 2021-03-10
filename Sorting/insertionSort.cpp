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
    for(int i = 1; i<n; i++)
    {
        int key = arr[i];
        int j = i -1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    

   return 0;
}
/* 
it is inplace and stable(inplace means no extra space taken)
Used in practice for small array (TimSort and IntraSort)
Timsort uses mergeSort and insertion SOrt
when input is small or input becomes small both uses insertion sort

in insertion sort we work on two part i.e sorted and unsorted part

Time Complexity
Best Case: theta(n) already Sorted
Worst Case: Reverse Sorted
[theta(n*n)]

In general : O(n*n)
 */