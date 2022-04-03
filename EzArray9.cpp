#include<bits/stdc++.h>
using namespce std;
int main()
{      int n;
       cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
       int pre[n];
       pre[0]=arr[0];
       for(int i=1;i<n;i++){
           pre[i]=max(arr[i],pre[i-1]);
       }
       int post[n];
       post[n-1]=arr[n-1];
       for(int i=n-2;i>=0;i--){
           post[i]=max(post[i+1],arr[i]);
       }
       for(int i=0;i<n;i++){
           if(arr[i]<pre[i] && arr[i]<post[i]){
               c=c+abs(arr[i]-min(pre[i],post[i]));
           }
       }
       cout<<c<<endl;
}
