#include<bits/stdc++.h>
using namespace std;
const int maxn = 100005;
int arr[maxn],brr[maxn],n;
map<int,vector<int> > mm;
void input(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        brr[i]=arr[i];
        mm[arr[i]].push_back(i);
    }
}
bool solve(){
    sort(brr,brr+n);
    int cnt=0;
    int disi[maxn];
    for(int i=0;i<n;i++){
        if(arr[i]!=brr[i]){
            disi[cnt++]=i;
        }
    }
    if(cnt>2)return 0;
    if(cnt==0)return 1;
    swap(arr[disi[0]],arr[disi[1]]);
    //for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    //cout << endl;
    int x;
    for(x=1;x<n && arr[x]>=arr[x-1];x++);
    if(x!=n)return 0;
    else return 1;
}
void output(bool x){
    if(x)cout << "YES\n";
    else cout << "NO\n";
}
int main(){
    input();
    bool x=solve();
    output(x);
}
