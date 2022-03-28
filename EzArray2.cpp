#include<bits/stdc++.h>
#define long long ll
using namespace std;
void maxmin(int arr[],int n)
{
int max,min;

        
    max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
   cout<<max<<"\t"<<min;
    
}
int main()
{	int n=5;
	int arr[]={1,9,8,3,2};
maxmin(arr,n);


return 0;
}
