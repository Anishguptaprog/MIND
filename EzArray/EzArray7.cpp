#include <bits/stdc++.h>
using namespace std;
 

int main()
{
    int arr[] = { 4, 2, 1, 8 };
    int n = sizeof(arr)/sizeof(arr[0]);
     int sum = 0;
 
    
    sort(arr, arr + n);
 
    
    for (int i = 0; i < n/2; i++)
    {
        sum -= (2 * arr[i]);
        sum += (2 * arr[n - i - 1]);
    }
 
    cout<<sum<<endl;

    
    return 0;
}
