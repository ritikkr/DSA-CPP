#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 4;
    int arr[] = {10, 20, 5, 7};
    sort(arr, arr + n); // first paramter is starting address and second paramter is
    for (int x : arr)
    {
        cout << x << " ";
    }
    sort(arr, arr + n, greater<int>()); //greatest element comes first i.e decreasing order
    cout << endl;
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}
/* 
    Sort(start, end, order);
first paramter is starting address 
second paramter is address of next to the last element that's why arr+n is there for array (not arr+n-1)
for vector it is v.end() // v.end gives iterator pointing to next address to the last element
 */