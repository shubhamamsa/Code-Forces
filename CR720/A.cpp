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
    long long a, b;
    cin >> a >> b;
    if(1 == b)   {
        cout << "NO";
        return;
    }
    cout << "YES\n";
    cout << a*(b-1) << " " << a*(b+1) << " " << 2*a*b;
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