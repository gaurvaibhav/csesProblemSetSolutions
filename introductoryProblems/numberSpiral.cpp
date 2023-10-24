#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ll long long
using namespace std;
int main(void)
{
    FASTIO;
    ll t, i, j;
    vector<vector<ll>> res;
    cin >> t;
    while(t--)
    {
        cin >> i >> j;
        if(i < j)
        {
            if(j & 1) cout << (j * j) - i + 1 << endl;
            else cout << ((j-1) * (j-1)) + i << endl;
        }
        else
        {
            if(i & 1) cout << ((i-1) * (i-1)) + j << endl;
            else cout << (i * i) - j + 1 << endl;
        }
    }
    return 0;
}
