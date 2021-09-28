#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int a[3], m;
    cin >> a[0] >> a[1] >> a[2] >> m;
    sort(a, a+3);
    if(m >= a[2]-a[0]-a[1]-1 && m <= a[0]+a[1]+a[2]-3)
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