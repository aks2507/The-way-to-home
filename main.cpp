#include <bits/stdc++.h>
using namespace std;
void print(vector<int> v)
{
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
int main()
{
    int n,d;
    cin>>n>>d;
    string s;
    cin>>s;

    if(n==0)
        return -1;
    vector<int> dp(n,INT_MAX);
    dp[0]=0;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(i<=j+d && dp[j]!=INT_MAX && s[j]=='1')
                dp[i]=min(dp[i],dp[j]+1);
            //cout<<i<<" "<<j<<endl;
            //print(dp);
        }
    }
    int res=(dp[n-1]==INT_MAX)?-1:dp[n-1];
    cout<<res<<"\n";
    return 0;
}
