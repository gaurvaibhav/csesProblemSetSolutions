#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ll long long
using namespace std;
int main(void)
{
    FASTIO;
    ll n, i;
    cin >> n;
    if(n == 1) cout << 1 << endl;
    else if(n < 4) cout << "NO SOLUTION" << endl;
    else
    {
        queue<ll> q;
        i = 1;
        while(i <= n)
        {
            q.push(i);
            ++i;
            if(i <= n) cout << i << " ", ++i;
        }
        while(!q.empty())
        {
            cout << q.front() << " ";
            q.pop();
        }
    }
    return 0;
}
