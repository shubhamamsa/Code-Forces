#include<bits/stdc++.h>
#define mod 1000000007

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

long long fact(long long n) {
    long long ans = 1;
    for(long long i=2;i<=n;i++) {
        ans = (ans*i)%mod;
    }
    return ans%mod;
}

void subMain()	{
    long long n, k;
    cin >> n >> k;
    // if(n <= k)  {
    //     cout << (n*k)%mod;
    //     return;
    // }
    // long long ans = 1;
    // long long fans = 0;
    // for(int i=n;i>k;i--)    {
    //     ans = (ans*i)%mod;
    //     fans = (fans+ans*binpow((n-i+1), k))%mod;
    // }
    // cout << fans%mod;
    cout << binpow(n, k);
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