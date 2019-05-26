#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f0(n) for(int i=0;i<n;i++)
#define ms(x) memset(x,0,sizeof(x))
#define ins insert
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int hh,mm;
    cin>>hh>>mm;
    int h,d,c,n;
    cin>>h>>d>>c>>n;
    int hn = h/n;
    if(hn*n<h) hn++;
    double wob=((double)hn)*(double)c;
    //cout << "wob: "<<wob<<endl;
    double wb;
    int rt = 1200 - ((hh*60)+mm);
    //cout << "rt: "<<rt<<endl;
    if(rt<=0) rt = 0;
    int kh = h+ (rt*d);

    //cout << "kh: "<<kh <<endl;
    double B = (double)c - ((double)c*20.0)/100.0;
    //cout << "B: "<< B<<endl;
    int khn= kh/n;
    if(khn*n<kh) khn++;
    wb = ((double)khn)*(double)B;
    //cout << "wb: "<<wb <<endl;
    //wb -= (wb*20.0)/100.0;
    cout <<fixed<<setprecision(4)<< min(wb,wob)<<endl;
    return 0;
}
