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

int inputArray(vector<elementType>& v,int size){
    elementType temp;
    int sum = 0;
    for (int i=0;i<size;i++){
        cin>>temp;
        sum += abs(temp);
        v.push_back(temp);
    }
    return sum;
}

void solve()
{
    int n;
    cin>>n;
    vi v;
    int sum = inputArray(v,n);
    int c = 0;
    for (int i=0;i<n;i++){
        if (v[i]>=0){
            continue;
        }
        while(v[i]<=0 && i<n){
            i++;
        }
        c++;
    }
    cout<<sum<<" "<<c<<endl;
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
