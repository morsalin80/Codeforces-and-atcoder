#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int arr[m+2];
        //memset(arr,0,m);
        for(int i=1;i<=m;i++)
            arr[i] =0;
        int x,y,counter=0;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            //cout << x << " "<<y <<endl;
            for(int j=x;j<=y;j++){
                if(arr[j]!=1){
                arr[j]=1;
                counter++;
              //  cout << j << "marked: and counter"<<m-counter<<endl;
            }}
        }
        cout << m-counter <<endl;
        if(m-counter>0)
        {
            for(int i=1;i<=m;i++)
            {
                if(arr[i]==0)
                    cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
