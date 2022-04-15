#include <bits/stdc++.h>
using namespace std;
  

int findMinDiff(int arr[], int n, int m)
{
    
    if (m == 0 || n == 0)
        return 0;
  
   
    sort(arr, arr + n);
  
    
    if (n < m)
        return -1;
  
 
    int ans = INT_MAX;
  
   
  
    for (int i = 0; i + m - 1 < n; i++) {
        int diff = arr[i + m - 1] - arr[i];
        if (diff <ans)
            ans = diff;
    }
    return ans;
}
  
int main()
{
    
    int m ;
    int n ;
    cin>>n;
    cin>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    { cin>>arr[i];
    }
   
         cout<< findMinDiff(arr, n, m);
    return 0;
}
