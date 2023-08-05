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
    int max = 0;
    int temp = 0;
    int a[m+1]={0};
    int q[m+1]={0};
    for (int i=1;i<=m;i++){
        cin>>a[i]>>q[i];
    }
    for (int i=1;i<=m;i++){
        if (a[i]>max){
            if (n/q[i]>max){
                if (a[i]>n/q[i]){
                    max = n/q[i];
                }else{
                    max = a[i];
                }
                temp = i;
            }
        }
    }
    if (temp){
        cout<<temp<<endl;
    }
    else{
        cout<<-1<<endl;
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
