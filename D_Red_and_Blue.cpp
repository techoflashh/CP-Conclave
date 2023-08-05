#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll,ll> pii;

void printArray(vector<ll> v){
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void inputArray(vector<ll>& v,ll size){
    ll temp;
    for (int i=0;i<size;i++){
        cin>>temp;
        v.push_back(temp);
    }
}

void solve()
{
    int n;
    cin>>n;
    vi r;
    inputArray(r,n);
    int m;
    cin>>m;
    vi b;
    inputArray(b,m);
    for (int i=1;i<n;i++){
        r[i] += r[i-1];
    }
    r.push_back(0);
    for (int i=1;i<m;i++){
        b[i] += b[i-1];
    }
    b.push_back(0);
    cout<<*max_element(b.begin(),b.end()) + *max_element(r.begin(),r.end())<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
