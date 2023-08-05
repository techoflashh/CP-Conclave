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
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (n == 2)
    {
        cout << -1 << endl;
        return;
    }
    if (n % 2 == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                for (int j = i; j <= n * n; j += n)
                {
                    cout << j << " ";
                }
                cout << endl;
            }
            else
            {
                for (int j = n * n - (n - i); j >= i; j -= n)
                {
                    cout << j << " ";
                }
                cout << endl;
            }
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                for (int j = i; j <= n * n; j += n)
                {
                    cout << j << " ";
                }
                cout << endl;
            }
            else
            {
                int c = 1;
                for (int j = n * n - (n - i); j >= i; j -= n)
                {
                    if (c != (n - 1) / 2)
                    {
                        cout << j << " ";
                    }else{
                        cout<<j-n<<" "<<j<<" ";
                        j = j-n;
                        c=n;
                    }
                    c++;
                }
                cout<<endl;
            }
        }
    }
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
