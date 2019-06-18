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
    int s;
    string str[21] = {"zero","one", "two", "three" , "four" , "five" , "six" , "seven" , "eight" , "nine" , "ten" , "eleven" , "twelve" ,
                       "thirteen" , "fourteen" , "fifteen" , "sixteen" , "seventeen" , "eighteen" , "nineteen" , "twenty"};
    string bal[10] ={ "", "" , "twenty" , "thirty" , "forty" , "fifty" ,"sixty" , "seventy" , "eighty" , "ninety" };
    while(cin>>s)
    {
        if(s<=20) cout << str[s] <<endl;
        else{
            int ekok = s%10;
            int doshok = s/10;
            if(ekok==0)
                cout << bal[doshok] <<endl;
            else
                cout << bal[doshok]<<"-"<<str[ekok]<<endl;
        }
    }
    return 0;
}

