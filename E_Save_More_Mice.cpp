#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
typedef int elementType;
typedef vector<elementType> vi;
typedef vector<vi> vvi;
typedef pair<elementType,elementType> pii;

void printArray(vector<elementType> v){
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void inputArray(vector<elementType>& v,int size){
    elementType temp;
    for (int i=0;i<size;i++){
        cin>>temp;
        v.push_back(temp);
    }
}

int searcht2(vi& v, int x)
{
    int l = 0;
    int r = v.size() - 1;
    int mid;
    while (l<=r){
        mid = (l+r)/2;
        if (v[mid]>=x){
            r = mid-1;
        }else{
            l = mid+1;
        }
    }
    return l-1;
}

void solve()
{
    int n,k;
    cin>>n>>k;
    vi v;
    inputArray(v,k);
    vi nA;
    nA.push_back(0);
    for (int i=0;i<k;i++){
        v[i] = n-v[i];
        if (v[i]>=0)
            nA.push_back(v[i]);
    }
    sort(nA.begin(),nA.end());
    for (int i=1;i<nA.size();i++){
        nA[i] = nA[i]+nA[i-1];
    }
    cout<<searcht2(nA,n)<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
