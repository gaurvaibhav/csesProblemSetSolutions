#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ll long long
using namespace std;
int main(void)
{
	FASTIO;
	ll n;
	cin >> n;
	cout << n << " ";
	while(n != 1)
	{
		if(n & 1)
		{
			n = (n * 3) + 1;
		}
		else 
		{
			n >>= 1;
		}
 
		cout << n << " ";
	}
	cout << endl;
	return 0;
}
