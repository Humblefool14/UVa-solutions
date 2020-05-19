#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
int C,S;
float spec[13];
  while(scanf("%d %d",&C,&S)==2)
  {
    if(C<=0 && S<=0)
    {
        break;
    }
    float sum=0;
    for(int i=0;i<S;i++)
    { cin >> spec[i];
      sum+= spec[i];
    }
     sum = sum/C;
     // Imbalance
     // Compute Imbalance
     // Greedy max function
     
  }
}
