#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    while(cin>>n>>k){
        vector<int> pr;
        pr.push_back(2);
        pr.push_back(3);
        bool prime=true;
        for(int i=5;i<=n;i++)
        {
            prime = true;
            for(int j=2;j<i;j++){
                if(i%j==0){prime= false;break;}
            }
            if(prime) pr.push_back(i);
        }
        ///if(n<5){ cout << "NO\n"; continue;}
        int c=0;
        for(int i=2;i<pr.size();i++){
            for(int j=1;j<i;j++){
            //cout << pr[i] << " "<< pr[j] << " "<<pr[j-1] <<endl;
            if(pr[i]==(pr[j]+pr[j-1])+1){ c++; break;}}
        }
        if(c>=k) cout << "YES\n";
        else cout << "NO\n";
}
return 0;
}
