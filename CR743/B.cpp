#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        cin >> b[i];
    int even[n]= {0};
    for(int i=0;i<n;i++)    {
        even[b[i]/2-1] = i;
    }
    int index = n-1;
    for(int i=n-1;i>=0;i--)    {
        if(even[i] < index)
            index = even[i];
        else
            even[i] = index;
    }
    int ans = 2*n;
    for(int i=0;i<n;i++)    {
        ans = min(ans, i+even[a[i]/2]);
        // cout << i+even[a[i]/2] << endl;
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