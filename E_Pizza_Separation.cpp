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
    int n;
    cin>>n;
    vi v;
    inputArray(v,n);
    if (n==1){
        cout<<v[0]<<endl;
        return;
    }
    int ans = INT_MAX;
    for (int i=0;i<n;i++){
        int temp = 0;
        for (int j=i;j<n;j++){
            temp = temp+v[j];
            if (temp>=180){
                ans  = min(ans,2*abs(180-temp));
                break;
            }

        }
    }
    for (int i=0;i<n;i++){
        int temp = 0;
        for (int j=i;j<n;j++){
            if (temp+v[j]>=180){
                ans  = min(ans,2*abs(180-temp));
                break;
            }
            temp = temp+v[j];
        }
    }
    cout<<ans<<endl;
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
