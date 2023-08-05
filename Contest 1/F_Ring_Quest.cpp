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
    int n,x,y;
    cin>>n>>x>>y;
    vvi v(n,vi(n,0));
    int c=0;
    int cl=0,cu=0;
    x--;y--;
    int starty = 0,endy = n-1;
    int tempx=x,tempy=starty;
    if (n-1-y>y){
        endy = y+y+1;
    }else if (n-1-y<y){
        starty = y-(n-1-y);
    }
    while (1){
        if (tempx==n || tempy==y+1){
            break;
        }
        if (v[tempx][tempy] == 0){
            c++;
            v[tempx][tempy] = 1;
        }
        tempx++;
        tempy++;
    }
    tempx = x;
    tempy = starty;
    while (1){
        if (tempx==-1 || tempy==y+1){
            break;
        }
        if (v[tempx][tempy] == 0){
            c++;
            v[tempx][tempy] = 1;
        }
        tempx--;
        tempy++;
    }
    tempx = x;
    tempy = endy;
    while (1){
        if (tempx==-1 || tempy==y+1){
            break;
        }
        if (v[tempx][tempy] == 0){
            c++;
            v[tempx][tempy] = 1;
        }
        tempx--;
        tempy--;
    }
    tempx = x;
    tempy = endy;
    while (1){
        if (tempx==n || tempy==y+1){
            break;
        }
        if (v[tempx][tempy] == 0){
            c++;
            v[tempx][tempy] = 1;
        }
        tempx++;
        tempy--;
    }
    tempx = x;
    tempy = 0;
    while (1){
        if (tempx==n || tempy==y+1){
            break;
        }
        cl++;
        tempx++;
        tempy++;
    }
    tempx = x;
    tempy = 0;
    while (1){
        if (tempx==-1 || tempy==y+1){
            break;
        }
        cl++;
        tempx--;
        tempy++;
    }
    tempx = x;
    tempy = n-1;
    while (1){
        if (tempx==-1 || tempy==y+1){
            break;
        }
        cu++;
        tempx--;
        tempy--;
    }
    tempx = x;
    tempy = n-1;
    while (1){
        if (tempx==n || tempy==y+1){
            break;
        }
        cu++;
        tempx++;
        tempy--;
    }

    // for (int i=0;i<n;i++){
    //     printArray(v[i]);
    // }
    if (c>=9 || cl>=9 || cu>=9){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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
