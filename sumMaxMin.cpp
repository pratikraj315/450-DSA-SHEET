#include<bits/stdc++.h>
using namespace std;

int sumMaxMin(int arr[], int n)
{
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i=0;i<n;i++)
    {
        maxi = max(arr[i], maxi);
        mini = min(arr[i], mini);
    }
    return {maxi+mini};
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of Max and Min: " << sumMaxMin(arr, n) << endl;
    return 0;
}