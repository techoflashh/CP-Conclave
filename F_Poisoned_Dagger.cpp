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

int cl(int x,int y){
    if (x%y==0){
        return x/y;
    }
    else{
        return x/y+1;
    }
}

int searcht2(vi& v, int x)
{
    int l = 0;
    int r = v.size() - 1;
    int mid;
    while (l<=r){
        mid = (l+r)/2;
        if (v[mid]>x){
            r = mid-1;
        }else{
            l = mid+1;
        }
    }
    return l-1;
}

void solve()
{
    int n,h;
    cin>>n>>h;
    vi v;
    inputArray(v,n);
    vi dif(n-1);
    for (int i=0;i<n-1;i++){
        dif[i] = v[i+1]-v[i];
    }
    sort(dif.begin(),dif.end());
    vi ps(n);
    for (int i=1;i<n;i++){
        ps[i] = ps[i-1]+dif[i-1];
    }
    for (int i=1;i<n;i++){
        ps[i] = ps[i]+dif[i-1]*(n-i);
    }
    int t = searcht2(ps,h);
    if (n==1){
        cout<<h<<endl;
        return;
    }
    if (t==0){
        if (h<n){
            cout<<1<<endl;
        }else{
            cout<<cl(h,n)<<endl;
        }
    }else if (t<n-1){
        cout<<cl(h-(ps[t]-dif[t-1]*(n-t)),n-t)<<endl;
    }else{
        cout<<(h-(ps[t]-dif[t-1]*(n-t)))<<endl;
    }
}

// void solve(){
//     int n,h;
//     cin>>n>>h;
//     vi v;
//     inputArray(v,n);
//     vi dif(n-1);
//     for (int i=0;i<n-1;i++){
//         dif[i] = v[i+1]-v[i];
//     }
//     sort(dif.begin(),dif.end());
//     int c=0;
//     if (n==1){
//         cout<<h<<endl;
//         return;
//     }
//     while(1){
//         int temp = cl(h,n-c);
//         if (temp<=dif[c]){
//             cout<<temp<<endl;
//             return;
//         }
//         h = h-dif[c++];
//         if (n-c<=1){
//             break;
//         }
//     }
//     cout<<h<<endl;
// }

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
