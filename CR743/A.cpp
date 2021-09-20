#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0, ans = 0;
    for(int i=n-1;i>=0;i--)    {
        if(s[i] > '0' && i != n-1)
            count++;
        ans += s[i]-'0';
    }
    cout << ans+count;
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