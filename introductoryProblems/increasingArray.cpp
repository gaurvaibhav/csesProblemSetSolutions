#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ll long long
using namespace std;
int main(void)
{
    FASTIO;
    ll n, i, prev, curr, res = 0;
    cin >> n;
    cin >> curr;
    prev = curr;
    if(n != 1)
    {
        for(i=1; i<n; ++i)
        {
            cin >> curr;
            if(curr < prev) 
            {
                res += prev - curr;
            }
            else prev = curr;
        }
    }
    cout << res << endl;
    return 0;
}
