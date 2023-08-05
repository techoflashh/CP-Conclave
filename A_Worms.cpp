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

int search(vi& v,int x){
    int l = 0;
    int r = v.size()-1;
    int mid;
    while(l!=r){
        mid = (l+r)/2;
        if (v[mid]>=x){
            r = mid;
        }else{
            l = mid+1;
        }
    }
    return l;
}

void solve()
{
    int n;
    cin>>n;
    vi v;
    v.push_back(0);
    inputArray(v,n);
    for (int i=1;i<n;i++){
        v[i] = v[i]+v[i-1];
    }
    int m;
    cin>>m;
    while(m--){
        int x;
        cin>>x;
        cout<<search(v,x)<<endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
