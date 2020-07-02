#include<iostream>
#include<sstream>
#include<iomanip>
using namespace std;
int main(){
    char convert[30];
    convert['A'] = convert['B'] = convert['C'] = '2';
    convert['D'] = convert['E'] = convert['F'] = '3';
    convert['G'] = convert['H'] = convert['I'] = '4';
    convert['J'] = convert['K'] = convert['L'] = '5';
    convert['M'] = convert['N'] = convert['O'] = '6';
    convert['P'] = convert['Q'] = convert['R'] = convert['S'] = '7';
    convert['T'] = convert['U'] = convert['V'] = '8';
    convert['W'] = convert['X'] = convert['Y'] = convert['Z'] = '9';
    string num;
    while(getline(cin,num)){
      for(unsigned int i=0;i<num.size();i++){
          if(num[i]>='A'|| num[i]<='Z'){
              num[i]=convert[num[i]];
          }}
      for(unsigned int i=0;i<num.size();i++){
          cout << num[i];
      }
      cout << endl;
    }
return 0;
}
