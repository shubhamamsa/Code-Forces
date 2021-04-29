#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

long long gcd (long long a, long long b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}

void subMain()	{
    long long n;
    cin >> n;
    long long ans = 1;
    set<long long>phi;
    phi.insert(1);
    for(int i=2;i<n;i++)    {
        if(gcd(n, i) != 1)
            continue;
        phi.insert(i);
        ans = (ans*i)%n;
    }
    if(ans != 1)
        phi.erase(ans);
    cout << phi.size() << "\n";
    for(auto i: phi)
        cout << i << " ";
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