#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

long long findfact(long long n)   {
    long long ans = 1;
    for(long long i=1;i<=n;i++)
        ans = (ans*i)%mod;
    return ans%mod;
}

void subMain()	{
    long long n;
    cin >> n;
    long long a[n];
    for(long long i=0;i<n;i++)
        cin >> a[i];
    long long ans = a[0];
    for(long long i=1;i<n;i++)
        ans = ans&a[i];
    map<long long, long long>count;
    for(long long i=0;i<n;i++)
        count[a[i]]++;
    // if(count.size() == 1)   {
    //     cout << findfact(n)%mod;
    //     return;
    // }
    if(count[ans] < 2)  {
        cout << 0;
        return;
    }
    for(auto i: count)  {
        if((i.first&ans) < ans) {
            cout << 0;
            return;
        }
    }
    cout << (((count[ans])*(count[ans]-1))%mod*findfact(n-2))%mod;
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