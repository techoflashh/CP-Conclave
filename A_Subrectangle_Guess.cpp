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
    int n,m;
    cin>>n>>m;
    vvi v;
    for (int i=0;i<n;i++){
        vi temp;
        inputArray(temp,m);
        v.push_back(temp);
    }
    int maxi=0;
    int maxj=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (v[i][j]>v[maxi][maxj]){
                maxi=i;
                maxj=j;
            }
        }
    }
    int l= max(maxi+1,n-maxi);
    int r= max(maxj+1,m-maxj);
    cout<<l*r<<endl;
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
