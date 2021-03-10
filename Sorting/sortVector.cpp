#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {5, 7, 20, 10};
    sort(v.begin(), v.end()); // default order is increasing
    for(int x: v)
    {
        cout<<x<<" ";
    }
    sort(v.begin(), v.end(), greater<int>());
    for(int x:v)
    {
        cout<<x<<" ";
    }

   return 0;
}