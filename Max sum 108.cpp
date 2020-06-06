#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int matrix[100][100];
int n;
int v[100];
int sum;
int main()
{
     // n*n matrix; n <101;
     cin >> n;
     for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
             cin >> matrix[i][j];
             if(i>0) matrix[i][j]+=matrix[i-1][j];  // Adding the 1st row (main) and add from top
             if(j>0) matrix[i][j]+=matrix[i][j-1];  // Adding the first colum and add from left
             if(i>0 && j>0) matrix[i][j]-= matrix[i-1][j-1]; // avodiding the double count
         }
    }
    int subsum = -1270000; // largest sum = -127*100*100;
    int i,j,k,m; // O(n^4) formation
     for(i=0;i<n;i++) for(j=0;j<n;j++) // Start co-ordinate
        for(k=i;k<n;k++)for(m=j;m<n;m++) // End co-ordinate
            sum=matrix[k][m];  // sum of all items from (0,0) to (k,m)
            if(i>0) sum = sum-matrix[i-1][m];
            if(j>0) sum = sum-matrix[k][j-1];
            if(i>0 && j>0) sum += matrix[i-1][j-1];
    // (1,2) to (3,3) implies sum == A[3][3]- A[0][3] - A[3][1] + A[0][1]
            subsum = max(sum,subsum);
    cout << subsum << endl;
return 0;
}
