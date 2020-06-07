#include<bits/stdc++.h>
#include<iostream>
using namespace std;
string arr[100][100];
int m,n;
bool check(int i,int j)
{
        if(arr[i][j]=="*")
        {
            return false;
        }
        arr[i][j]="*";
        if(i-1>=0){              // Go up
            check(i-1,j);
       }
       if(i-1>=0 && j-1>=0)
       {
           check(i-1,j-1);       // Go Diagonal -> left most square
       }
       if(i-1>=0 && j+1 <=n)
       {
           check(i-1,j+1);      // Go diagonal -> top right
       }
       if(j-1>=0){
           check(i,j-1);        // Check Adjacents
       }
       if(j+1<=m)
       {
           check(i,j+1);         // Check to make sure not at the end
       }
       if(i+1<=m){
           check(i+1,j);         // Go down
      }
      if(i+1<=m && j-1>=0)
      {
          check(i+1,j-1);       // Go down Diagonally -> left square
      }
      if(i+1<=m && j+1 <=n)
      {
          check(i-1,j+1);      // Go down Diagonally --> right square
      }
      return true;
}

int main()
{
    while(cin >> m >>n,n>0)
    {
        int count=0;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                cin >> arr[i][j]; // Inputting the charss
            }
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=m;j++){
                if(check(i,j))
                {
                    count++;
                }
            }}
        cout << count << endl;
    }
return 0;
}
