#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n, m, k;
    cin >> n >> m >> k;
    if(m*n-1 == k)
        cout << "YES";
    else
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