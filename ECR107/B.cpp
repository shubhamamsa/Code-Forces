#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    long long a, b, c;
    cin >> a >> b >> c;
    long long primes[9] = {2, 11, 101, 1009, 10007, 100003, 1000003, 10000019, 100000007};
    long long tempa = primes[a-c]*primes[c-1];
    long long tempb = primes[b-c]*primes[c-1];
    if(a == b)
        tempb+=primes[c-1];
    cout << tempa << " " << tempb;
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