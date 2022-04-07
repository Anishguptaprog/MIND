#include<bits/stdc++.h>
#define long long ll
using namespace std;
bool palindrome(int a)
{
	 string str = "" + a;
        int len = str.length();
        for (int i = 0; i < len / 2; i++) {
            if (str[i] != str[len - 1 - i])
                return false;
        }
        return true;
    
}

int main()
{	bool flag=true;
	int arr[]={111,222,333,444,555,122};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{	 flag=palindrome(arr[i]);
		
			
	}
	if(flag==false)
		cout<<"0";
	else 
		cout<<"1";
	

return 0;
}
