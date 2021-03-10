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
    int min_ind;
    for (int i = 0; i< n-1; i++)
    {
        min_ind = i;
        for (int j = i+1; j < n; j++ )
        {
            if(arr[j]<arr[min_ind])
            {
                min_ind = j;
            }
        }
        swap(arr[min_ind], arr[i]);
    }

   return 0;
}
/* 
-----> O(n*n) algorithm
-----> Does less memory writes compared to QuickSort, MergeSort, Insertion Sort, etc
        But Cycle sort is optimal in term of memory writes
-----> basic Ideas for heapsort 
-----> not stable
-----> in-place, it doesn't require extra space memory

 */