#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n;
    cin >> n;
    int a[n], drenched[n+1] = {0};
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)    {
        if(a[i] > 0)    {
            drenched[max(0, i-a[i]+1)]++;
            drenched[i+1]--;
        }
    }
    for(int i=1;i<n;i++)    {
        drenched[i]+=drenched[i-1];
    }
    for(int i=0;i<n;i++){
        if(drenched[i])
            cout << 1 << ' ';
        else
            cout << 0 << ' ';
    }
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