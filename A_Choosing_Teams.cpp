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
    int n,k;
    cin>>n>>k;
    vi v;
    inputArray(v,n);
    vi freq(6);
    for (int i=0;i<n;i++){
        freq[v[i]]++;
    }
    for (int i=1;i<6;i++){
        freq[i] += freq[i-1]; 
    }
    cout<<freq[5-k]/3<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
