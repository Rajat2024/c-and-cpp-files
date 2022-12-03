#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 6};
    bool res = binary_search(arr, arr + n, 3);
    // if array
    int ind = lower_bound(arr, arr + n, 4) - a; // 3 index
    // if element is not present then it imiadiate point to next element 
    int ind = lower_bound(arr, arr + n, 5) - a; // 4 index
    
    // if vector
    // int ind = lower_bound(arr.begin(), arr.end(), 4) - arr.begin();

    //  upper_bound always count the next greater element 
    int ind=upper_bound(arr,arr+n,4); // 3
    int ind=upper_bound(arr,arr+n,5); // 4
    int ind=upper_bound(arr,arr+n,7); // 5
}