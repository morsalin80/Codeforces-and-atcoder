#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ms(x) memset(x,0,sizeof(x))
#define IOS ios::sync_with_stdio(false);
using namespace std;
int main()
{
	IOS
    int n;
    while(cin>>n)
    {
        int arr[n];
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+= arr[i];
        }
        if(n==2) {cout << "1 2\n"; continue;}
        int b = ((2*sum)/n);
        //cout << b <<endl;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==-1) continue;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]==-1) continue;
                if(arr[i]+arr[j]==b) {cout << i+1 << " " << j+1 <<endl; arr[j]= -1; break;}
            }
        }
    }
    return 0;
}

