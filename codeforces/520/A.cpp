#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        string s;
        cin>>s;
        if(n<26){
            cout << "NO\n";
            continue;
        }
        int arr[200] ={0};
        for(int i=0;i<s.length();i++)
            arr[s.at(i)]++;
        int j;
        bool pangram = true;
        for(int i=65,j = 97;i<91;i++,j++)
        {
            if(arr[i]==0 && arr[j]==0)
            {
                pangram = false;
                break;
            }
        }
        if(pangram)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
