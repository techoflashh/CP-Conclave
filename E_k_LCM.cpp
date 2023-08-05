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
    if (n%2!=0){
        cout<<1<<" "<<n/2<<" "<<n/2<<endl;
    }else if (n%4 !=0 || n==4){
        cout<<2<<" "<<n/2-1<<" "<<n/2-1<<endl;
    }else{
        cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
    }
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
