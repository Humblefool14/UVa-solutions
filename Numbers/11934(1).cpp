#include<cstdio>

using namespace std;

int main()
{

    long long int fn,i,k,a ,b ,c ,d ,L;

    while(scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&L)==5)
        {
            if(a==0 && b==0 && c==0 && d==0 && L==0)break;
            k=0;
            for(i=0;i<=L;i++)
            {
                fn=(i*i*a)+(i*b)+c;
                if(fn%d==0)k++;
            }
            printf("%lld\n",k);
        }


    return 0;
}
