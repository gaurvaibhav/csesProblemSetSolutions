#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ll long long
using namespace std;
int main(void)
{
	FASTIO;
	int i, n, x, ex;
	ex = 0;
	cin >> n;
	for(i=1; i<n; ++i)
	{
		cin >> x;
		ex ^= x;
		ex ^= i;
	}
	ex ^= i;
	cout << ex << endl;
	return 0;
}
