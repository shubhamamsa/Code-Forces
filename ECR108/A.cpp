#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    long long r, b, d;
    cin >> r >> b >> d;
    if(r < b)
        swap(r, b);
    if(b*(d+1) < r) {
        cout << "NO";
    }
    else
        cout << "YES";
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