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

bool compare(vi v1,vi v2){
    for (int i=0;i<v1.size();i++){
        if (v1[i]!=v2[i]){
            return false;
        }
    }
    return true;
}

bool isSolved(vi v){
    for (int i=0;i<v.size();i++){
        if (i!=v[i]){
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin>>n;
    vi v;
    inputArray(v,n);
    vi v2(v);
    while(1){
        if (isSolved(v2)){
            cout<<"Yes"<<endl;
            return;
        }

        for (int i=0;i<n;i++){
            if (i%2==0){
                v2[i] = (v2[i]-1)%n+n;
                v2[i]%=n;
            }else{
                v2[i] = (v2[i]+1)%n;
            }
        }
        if (compare(v,v2)){
            cout<<"No"<<endl;
            return;
        }
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
