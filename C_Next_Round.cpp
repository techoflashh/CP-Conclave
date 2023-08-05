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
    ll n,k;
    cin>>n>>k;
    vi v;
    inputArray(v,n);
    ll temp = v[k-1];
    if (temp == 0){
        for (ll i=k-1;i>=0;i--){
            if (v[i]!=0){
                break;
            }
            k--;
        }
    }
    else{
        for (ll i=k;i<n;i++){
            if (v[i]==temp){
                k++;
            }else{
                break;
            }
        }
    }
    cout<<k<<endl;
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
