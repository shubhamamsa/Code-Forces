#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n;
    cin >> n;
    int a[n];
    set<int>count;
    for(int i=0;i<1000;i++)
        count.insert(i*i);
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)    {
        if(count.find(a[i]) == count.end())   {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
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