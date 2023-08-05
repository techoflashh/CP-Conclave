#include <bits/stdc++.h>
using namespace std;
#define ll char
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

void inputArray(vector<ll>& v,int size){
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
    vi v;
    inputArray(v,n);
    vector<int> freq(26);
    for (int i=0;i<n;i++){
        freq[v[i]-97]++;
    }
    for (int i=0;i<26;i++){
        if (freq[i]!=1 && freq[i]!=0){
            cout<<"Yes"<<endl;
            return;
        }
    }
    if (n!=1)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
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
