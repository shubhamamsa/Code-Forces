#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n;
    cin >> n;
    int a[n];
    map<int, int>count;
    int x;
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        count[a[i]]++;
    for(auto i: count)  {
        if(i.second == 1)
            x = i.first;
    }
    for(int i=0;i<n;i++)    {
        if(a[i] == x)
            cout << i+1;
    }
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