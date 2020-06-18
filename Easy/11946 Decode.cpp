#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc,l;
    char c,s[100];
    scanf("%d%c",&tc,&c);
    for(int i = 0; i < tc; i++){
        while(gets(s) != '\0'){
            l = strlen(s);
//            cout<<l<<endl;
            if(l == 0) break;
            for(int j = 0; j < l; j++){
                if(s[j] == '4'){cout << "A";}
                else if(s[j] == '8'){cout<<"B";}
                else if(s[j] == '3'){cout <<"E";}
                else if(s[j] == '6'){cout<< "G";}
                else if(s[j] == '1'){cout<<"I";}
                else if(s[j] == '0'){cout<<"O";}
                else if(s[j] == '9'){cout<<"P";}
                else if(s[j] == '5'){cout<<"S";}
                else if(s[j] == '7'){cout<<"T";}
                else if(s[j] == '2'){cout<<"Z";}
                else{cout << s[j];}
            }
            cout<< endl;
        }
        if(i != tc - 1){
            printf("\n");
        }
    }
return 0;    
}
