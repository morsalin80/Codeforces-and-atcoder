#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
bool PC(const std::pair<long long, long long >& firstElem, const std::pair<long long, long long >& secondElem) {
  return (firstElem.first < secondElem.first );
}

int main()
{
	IOS
    int n,k;
    while(cin>>n>>k)
    {
       ll p[n];
       ll c[n];
       vector<pair<ll,ll> >vec;
       for(ll i=0;i<n;i++)
       {
           cin>>p[i];
           vec.pb(mp(p[i],i));
       }
       for(int i=0;i<n;i++)
       {
           cin>>c[i];
       }
       vector<pair<ll,ll> >vp;
       vector<pair<ll,ll> >::iterator it1,it2;
       sort(vec.begin(),vec.end(),PC);
       for(int i=0;i<n;i++)
       {
           vp.pb(mp(p[i],c[i]));
       }
       sort(vp.begin(),vp.end(),PC);
       multiset<ll>muls;
       int i;
       for(it1=vp.begin(),it2=vec.begin(),i=0;it1!=vp.end();i++,it1++,it2++)
       {
           if(i==0)
           {
               muls.ins((*it1).second);
               continue;
           }
           multiset<ll>::reverse_iterator mt;
           int point;
           for(mt=muls.rbegin(),point=0;mt!=muls.rend(),point<k;point++,mt++)
           {
               if(point==muls.size()){
                break;
               }
               //cout << *mt <<endl;
               c[(*it2).second] += *mt;
             //  cout << c[(*it2).second]<<endl;
           }
           muls.ins((*it1).second);
       }
       for(i=0;i<n;i++)
       {
           cout << c[i] << " ";
       }
       cout << endl;
    }
    return 0;
}

