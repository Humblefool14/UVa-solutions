#include<iostream>
#include<sstream>
#include<cstdio>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--){
      string line;
      getline(cin,line);
      stringstream ss(line);
      int indx[5000];
      int n=1;
      while(ss >> indx[n]){
          n++;
      }
      getline(cin,line);
      ss.clear();
      string x[5000];
      int i=1;
      while(ss >> x[indx[i]]){
          i++;
      }
      for(int j=1;j<=i;j++){
          cout << x[i]<< endl;
      }
  }
 return 0;  
}
