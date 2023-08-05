#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
typedef char elementType;
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
    vi freq(27);
    for (int i=0;i<n;i++){
        freq[v[i]-97]++;
    }
    int max= 0;
    for (int i=0;i<27;i++){
        if (freq[max]<freq[i]){
            max = i;
        }
    }
    char c = max+97; 
    cout<<c<<endl;
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
