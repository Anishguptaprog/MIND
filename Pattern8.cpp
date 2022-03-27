#include <bits/stdc++.h>
using namespace std;
 

void swastika(int row, int col)
{
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++) {
         
    
    if (i < row / 2) {
         
       
        if (j < col / 2) {
            
        if (i == 0 && i < row / 2)
            cout << "*" << " ";
             
        else
            cout << " " << " ";
        }
         
        else if (j == col / 2)
        cout << "*";
        else {
             
       
        if (i < row / 2 && j < col - 1)
            cout << " " << " ";
        if (j == col - 1)
            cout << " "    << "*";
        }
    }
 
    
    else if (i == row / 2)
        cout << "*" << " ";
    else
    {
        if (j == col / 2 || j == 0)
        cout << "*" << " ";
        else if (i == row - 1)
        {
    
        if (j <= col / 2 || j == col)
            cout << " " << " ";
        else
            cout << "*" << " ";
        }
         
        else
        cout << " " << " ";
    }
    }
    cout << endl;
}
}
 
int main()
{
  int n;
  cin>>n;
  
  swastika(n, n);
 
   return 0;
}
