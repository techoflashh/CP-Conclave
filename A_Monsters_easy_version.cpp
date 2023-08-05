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

void solve()
{
    int n;
    cin >> n;
    vi v;
    inputArray(v, n);
    sort(v.begin(), v.end());
    int c = v[0]-1;
    v[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i]==v[i-1]){
            continue;
        }
        c = c +  (v[i] - v[i-1]) - 1;
        v[i] = v[i-1]+1;
    }
    cout << c << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
