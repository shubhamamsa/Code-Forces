#include<bits/stdc++.h>
#define mod 998244353

using namespace std;

long long binpow(long long a, long long b) {
    a %= mod;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

long long findans(long long x, long long n) {
    int flag = 1;
    long long ans = 0;
    long long test = 3;
    while(x-test+1 > 0)    {
        ans = (ans + (flag*(binpow(2, n-test))*(x-test+1))+mod)%mod;
        flag *= -1;
        test++;
    }
    return ans%mod;
}

void subMain()	{
    long long n, m;
    cin >> n >> m;
    char s[n+2][m+2];
    for(int i=0;i<n+2;i++)  {
        for(int j=0;j<m+2;j++)  {
            s[i][j] = '0';
        }
    }
    long long w = 0;
    for(int i=1;i<=n;i++)    {
        for(int j=1;j<=m;j++)   {
            cin >>s[i][j];
            if(s[i][j] == 'o')
                w++;
        }
    }
    long long count = 0;
    for(int i=1;i<=n;i++)   {
        for(int j=1;j<=m;j++)   {
            if(s[i][j] == 'o')  {
                if(s[i+1][j] == 'o')
                    count++;
                if(s[i][j+1] == 'o')
                    count++;
            }
        }
    }
    long long wrongans = 0;
    long long ans = (count*binpow(2, w-2));
    for(int i=1;i<=n;i++)   {
        long long lcount = 0;
        for(int j=1;j<=m;j++)   {
            if(s[i][j] == 'o')
                lcount++;
            else   {
                if(lcount > 2)  {
                    wrongans = (wrongans + findans(lcount, w))%mod;
                }
                lcount = 0;
            }
            if(j == m && s[i][j] == 'o')    {
                if(lcount > 2)  {
                    wrongans = (wrongans + findans(lcount, w))%mod;
                }
            }
        }
    }
    for(int i=1;i<=m;i++)   {
        long long lcount = 0;
        for(int j=1;j<=n;j++)   {
            if(s[j][i] == 'o')
                lcount++;
            else   {
                if(lcount > 2)  {
                    wrongans = (wrongans + findans(lcount, w))%mod;
                }
                lcount = 0;
            }
            if(j == n && s[j][i] == 'o')    {
                if(lcount > 2)  {
                    wrongans = (wrongans + findans(lcount, w))%mod;
                }
            }
            // cout << lcount << "\n";
        }
    }
    cout << (ans - wrongans + mod)%mod;
}

int main()	{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin >> t;
    while(t--)	{
        subMain();
        cout << "\n";
    }
    return 0;
}