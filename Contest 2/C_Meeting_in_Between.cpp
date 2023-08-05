#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
typedef int elementType;
typedef vector<elementType> vi;
typedef vector<vi> vvi;
typedef pair<elementType, elementType> pii;

void printArray(vector<elementType> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void inputArray(vector<elementType> &v, int size)
{
    elementType temp;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
}

int search(vi &v, int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (v[mid] == x)
            return mid;
        if (v[mid] > x)
            return search(v, l, mid - 1, x);
        return search(v, mid + 1, r, x);
    }
    return -1;
}


void solve()
{
    int n;
    cin >> n;
    vi v;
    inputArray(v, n);
    vi prefixSum(n + 1);
    prefixSum[0] = 0;
    for (int i = 1; i < n + 1; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + v[i - 1];
    }
    int ans = 0;

    for (int i = 1; i < n; i++)
    {
        if ((prefixSum[n] - prefixSum[i - 1]) % 2 == 0)
        {
            int temp = (prefixSum[n] - prefixSum[i - 1]) / 2 + prefixSum[i - 1];
            
            if (search(prefixSum, i, n, temp) != -1)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test = 1;
    // cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}
