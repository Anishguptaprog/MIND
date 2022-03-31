#include<bits/stdc++.h>
#define long long ll
using namespace std;
int main()
{
	int A[]={0,1,0,2,0,1,1};
	int n=sizeof(A)/sizeof(A[0]);
//	cout<<"n"<<n<<endl;
 int i = 0 ,  countzero = 0 , countone = 0 ,  counttwo = 0 ;  
    while ( i < n )  
    {  
        if ( A [ i ] == 0 )  
        {  
            countzero = countzero + 1 ;  
        }  
        else if ( A [ i ] == 1 )  
        {  
            countone = countone + 1 ;  
        }  
        else  
        {  
            counttwo = counttwo + 2 ;  
        }  
      i++; 
    }  
    for  ( i = 0 ; i < countzero ; i++ )  
    {  
        A [ i ] = 0 ;  
    }  
    for ( i = countzero ; i < countzero + countone ; i++ )  
    {  
        A [ i ] = 1 ;  
    }  
            for ( i = countzero + countone ; i < n ; i++ )  
    {  
        A [ i ] = 2 ;  
    }  
    for(i=0;i<n;i++)
{	cout<<A[i]<<endl;
}


return 0;
}
