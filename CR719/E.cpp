#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long count = 0;
    for(long long i=0;i<n;i++)
        if(s[i] == '*')
            count++;
    long long check = 0;
    long long ans = 0;
    for(long long i=0;i<n;i++)    {
        if(s[i] == '*')
            check++;
        else    {
            ans += min(check, count-check);
        }
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