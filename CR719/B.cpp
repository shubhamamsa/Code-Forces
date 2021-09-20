#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

long long elm(int dig) {
    int ans = 0;
    for(int i=0;i<dig;i++)  {
        ans *= 10;
        ans++;
    }
    return ans;
}

int digit(long long n)  {
    int dig = 0;
    while(n!=0) {
        dig++;
        n/=10;
    }
    return dig;
}

void subMain()	{
    long long n;
    cin >> n;
    int dig = digit(n);
    long long ans = (dig-1)*9;
    long long test = elm(dig), temp = test;
    while(temp <= n)    {
        ans++;
        temp += test;
    }
    cout << ans;
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