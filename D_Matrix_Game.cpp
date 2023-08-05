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
    vi v(m);
    int cr=0;
    for (int i=0;i<n;i++){
        int flag = 1;
        for (int j=0;j<m;j++){
            int temp;
            cin>>temp;
            v[j] = v[j]|temp;
            if (temp==1){
                flag = 0;
            }
        }
        if (flag){
            cr++;
        }
    }
    int cc=0;
    for (int i=0;i<m;i++){
        if (v[i]==0){
            cc++;
        }
    }
    if (min(cr,cc)%2==0){
        cout<<"Vivek"<<endl;
    }
    else{
        cout<<"Ashish"<<endl;
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
