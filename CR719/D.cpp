#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)    {
        cin >> a[i];
        a[i] -= (i+1);
    }
    map<long long, long long>count;
    for(int i=0;i<n;i++)
        count[a[i]]++;
    long long ans = 0;
    for(auto i: count)  {
        ans += (i.second*(i.second-1))/2;
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