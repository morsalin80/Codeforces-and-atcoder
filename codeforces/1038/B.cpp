#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int s1=0,s2=0;
        if(n==1){
            cout << "No\n";
            continue;
        }
        vector<int> arr1,arr2;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                s1+=i;
                arr1.push_back(i);
            }

            else{
                s2+=i;
                arr2.push_back(i);
            }
        }
        int j=0;
        bool pos = true;
        while(1)
        {
            if(j>arr1.size())
            {
                cout << "No\n";
                pos = false;
                break;
            }
            if(__gcd(s1,s2)>1){
                cout << "Yes\n";
                break;
            }
            else
            {
                s1--;s2++;
                arr1[j]--;arr2[j]++;
                j++;
            }
        }
        if(pos)
        {
            cout << arr1.size() << " ";
            for(int i=0;i<arr1.size();i++)
                cout << arr1[i] << " ";
            cout << endl;
            cout << arr2.size()<< " ";
            for(int i=0;i<arr2.size();i++)
            {
                cout << arr2[i] << " ";
            }
            cout << endl;
        }

    }
}
