#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

map<long long, long long>test;

long long find(long long x)  {
    if(x < 10)
        return 1;
    if(test.find(x) != test.end())
        return test[x];
    long long f = find(x-9)%mod;
    long long s = find(x-10)%mod;
    test[x] = (f+s)%mod;
    return (s+f)%mod;
}

void subMain()	{
    long long n, m;
    cin >> n >> m;
    long long ans = 0;
    while(n > 0)    {
        ans = (ans+find(n%10+m))%mod;
        n/=10;
    }
    cout << ans%mod;
}

int main()	{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	{
        subMain();
        cout << "\n";
    }
    return 0;
}