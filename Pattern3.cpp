#include<bits/stdc++.h>
#define long long ll
using namespace std;
int main()
{	int n;
	cin>>n;
	while(n>=0)
	{	for(int i=1;i<=n;i++)
		{	cout<<" ";
			if(i==n)
			cout<<"*";
			
		}
		cout<<endl;
		n--;
	}


return 0;
}
