#include <iostream>
using namespace std;
typedef long long int ll;
int main()
{
	ll a,b;
    while (cin >> a >> b,a>0 && b>0)
	{
		int count= 0;
		int carry=0;
		while (a || b)
		{
			int current = a%10 + b%10+carry;
            if(carry>0){carry--; }  // first cut out old carry //
            if(current>=10){
                count++;
                carry=current/10;  // Update new carry
            }
			a/= 10;
			b/= 10;
		}
		if (count == 0)
			cout << "No";
		else
			cout << count;
		cout << " carry operation" << endl;
	}
return 0;
}
