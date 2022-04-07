#include<bits/stdc++.h>
#define long long ll
using namespace std;
int main()
{	int a[]={3,2,5,1,7,5};
	int count=0;
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=1;i<n;i++)
	{
		if(a[i-1]>a[i])
		{
				
				count+=(a[i-1]-a[i]);
				a[i]=a[i-1];
//				cout<<count<<" "<<i<<" ";
			}
		
//		cout<<i<<" "<<a[i-1]<<" "<<a[i]<<" ";
	
	}
	cout<<count;


return 0;
}
