#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if(k >= (n+1)/2)    {
        cout << "No";
        return;
    }
    for(int i=0;i<k;i++)    {
        if(s[i] != s[n-i-1])    {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
}

int main() {
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