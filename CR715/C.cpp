#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

long long dp[2005][2005];

long long min(long long a, long long b) {
    if(a < b)
        return a;
    return b;
}

void findans(long long a[], long long l, long long r)  {
    if(l+1 == r)    {
        dp[l][r] = a[r]-a[l];
        return;
    }
    long long ans = a[r]-a[l];
    if(dp[l+1][r] == -1)
        findans(a, l+1, r);
    if(dp[l][r-1] == -1)
        findans(a, l, r-1);
    ans += min(dp[l+1][r], dp[l][r-1]);
    dp[l][r] = ans;
}

void subMain()	{
    long long n;
    cin >> n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            dp[i][j] = -1;
    long long a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a, a+n);
    findans(a, 0, n-1);
    cout << dp[0][n-1];
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