#include<bits/stdc++.h>
#define long long ll
using namespace std;
void subArrays(int arr[], int n)
{
    
    for (int i=0; i <n; i++)
    {
       
        for (int j=i; j<n; j++)
        {
            
            for (int k=i; k<=j; k++)
                cout << arr[k] << " ";
 
            
        }
    }
}
void Subsequences(int arr[], int n)
{
    
    unsigned int opsize = pow(2, n);
 
    
    for (int counter = 1; counter < opsize; counter++)
    {
        for (int j = 0; j < n; j++)
        {
            
            if (counter & (1<<j))
                cout << arr[j] << " ";
        }
        cout << endl;
    }
}
int main()
{	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{	cin>>arr[i];
	}
	int choice;
	cin>>choice;
	switch(choice)
	{	case 1:
			subArrays(arr,n);
			cout<<endl;
			break;
		case 2:
			Subsequences(arr,n);
			cout<<endl;
			break;
		default:
			cout<<"Incorrect entry"<<endl;
	}


return 0;
}
