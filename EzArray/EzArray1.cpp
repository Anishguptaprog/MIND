#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3};
    
   int n= sizeof(arr)/sizeof(arr[0]);
//   cout<<n<<endl;
   int rev[n];
    
    // for(int i=0;i<n;i++)
    //    cin>>arr[i];

        for(int i=0;i<n;i++)
        {rev[i]=arr[n-i-1];
//        	cout<<rev[i]<<endl;
            
        }
         for(int i=0;i<n;i++)
         {cout<<rev[i];
         }
    return 0;
}
