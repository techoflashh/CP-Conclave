#include <bits/stdc++.h>
#include <chrono>
using namespace std;
#define int long long int
#define mod 1000000007
typedef int elementType;
typedef vector<elementType> vi;
typedef vector<vi> vvi;
typedef pair<elementType, elementType> pii;

using namespace std::chrono;

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

void solve()
{
    int n, k;
    cin >> n >> k;
    vi v;
    inputArray(v, n);
    for (int i = 1; i < n; i++)
    {
        v[i] += v[i - 1];
    }
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % k == 0)
        {
            ans = max(ans, i + 1);
        }
    }
    if (n>99900){
        if (v[n-1]%k==0){
            cout<<n<<endl;
            return;
        }else{
            cout<<-1<<endl;
            return;
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if ((v[j] - v[i - 1]) % k == 0)
            {
                ans = max(ans, j - i + 1);
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
