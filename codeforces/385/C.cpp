#include<bits/stdc++.h>
using namespace std;
const int maxn=1e4;
bitset<10000010>num;
vector<int>prime;
void seive(){
    num.set();
    prime.push_back(2);
    num[0]=num[1]=0;
    for(int i=2;i<=maxn;i+=2){
        num[i]=0;
    }
    for(int i=3;i<=maxn;i+=2){
        if(num[i]){
            prime.push_back(i);
            for(int j=i*i;j<=maxn;j+=(i+i)){
                num[j]=0;
            }
        }
    }
}
int pre[(int)1e7+1]={0};
void factor(int x){
    int xx=x;
    for(int i=0; i<(int)prime.size() && prime[i]*prime[i]<=xx;i++){
        int p=prime[i],cnt=0;
        if(p>x)break;
        while(x%p==0){
            x/=p;
            cnt++;
        }
        if(cnt!=0){
            pre[p]++;
        }
    }
    if(x>1)pre[x]++;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    seive();
    long long n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        factor(x);
    }
    for(int i=1;i<=1e7;i++){
        pre[i]+=pre[i-1];
    }
    int q;
    cin>>q;
    while(q--){
        long long l,r;
        cin>>l>>r;
        if(l>=1e7){
           cout << "0\n";
        }
        else if(r>1e7){
            cout<<pre[(int)1e7]-pre[l-1]<<endl;
        }
        else cout<<pre[r]-pre[l-1]<<endl;
    }
    return 0;
}
