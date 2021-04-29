#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    long long n;
    cin >> n;
    long long count = 0;
    while(true) {
        if(n < 2050 && n != 0)  {
            cout << -1;
            return;
        }
        long long temp = 2050;
        while(temp < n)
            temp*=10;
        if(temp > n)
            temp/=10;
        count+=n/temp;
        n = n%temp;
        if(n == 0)
            break;
    }
    cout << count;
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