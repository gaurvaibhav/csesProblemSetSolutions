#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ll long long
using namespace std;
int main(void)
{
    FASTIO;
    int i, c, res, n;
    string s;
    cin >> s;
    n = s.length();
    c = res = 1;
    for(i=0; i<n-1; ++i)
    {
        if(s[i] == s[i+1])
        {
            c++;
        }
        else 
        {
            c = 1;
        }
        res = max(res, c);
    }
    cout << res << endl;
    return 0;
}
