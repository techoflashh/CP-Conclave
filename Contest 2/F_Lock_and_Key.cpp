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

int search(vi &v, int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (v[mid] == x)
            return mid;
        if (v[mid] > x)
            return search(v, l, mid - 1, x);
        return search(v, mid + 1, r, x);
    }
    return -1;
}

void solve()
{
    int n,x;
    cin>>n>>x;
    vi a;
    a.push_back(0);
    inputArray(a,n);
    vi s;
    s.push_back(0);
    inputArray(s,n);
    vi r;
    r.push_back(0);
    inputArray(r,n);
    for (int i=1;i<n+1;i++){
        s[i]+=s[i-1];
        a[i]+=a[i-1];
        r[i]= r[i]|r[i-1];
    }
    for (int i=0;i<n+1;i++){
        int temp = x-a[i];
        int index = search(s,0,n,temp);
        if (index!=-1){
            if (search(r,0,n,a[i]|temp)!=-1){
                cout<<"yes"<<endl;
                return;
            }
        }
    }
    cout<<"no"<<endl;
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
