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

void solve()
{
    int x,n;
    cin>>x>>n;
    vi v;
    inputArray(v,n);
    int mina = INT_MAX;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i!=j && v[i]+v[j]>=x){
                int temp = v[i]*(i+1)+v[j]*(j+1);
                mina = min(mina,temp);
            }
        }
    }
    if (mina==INT_MAX){
        cout<<-1<<endl;
    }else{
        cout<<mina<<endl;
    }
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
