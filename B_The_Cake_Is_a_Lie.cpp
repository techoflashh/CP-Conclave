#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> pii;

void printArray(vector<ll> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void inputArray(vector<ll> &v, ll size)
{
    ll temp;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
}

int solveRecursively(int n, int m, int k, int x, int y, vvi &dp)
{
    if (n == x && m == y)
    {
        if (k==0)
            return 1;
        else
            return 0;       
    }
    if (k < 0)
    {
        return 0;
    }
    if (dp[m - 1][n - 1] == -1)
    {
        if (n==x){
            dp[m - 1][n - 1] = solveRecursively(n, m, k - x, x, y + 1, dp);
        }
        else if (m==y){
            dp[m - 1][n - 1] = solveRecursively(n, m, k - y, x + 1, y, dp);
        }
        else{
            dp[m - 1][n - 1] = (solveRecursively(n, m, k - x, x, y + 1, dp) || solveRecursively(n, m, k - y, x + 1, y, dp));
        }
    }
    return dp[m - 1][n - 1];
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vvi dp(m, vi(n, -1));
    if (solveRecursively(n, m, k, 1, 1, dp))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
