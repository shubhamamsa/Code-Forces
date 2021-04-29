#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            a[i][j] = -1;
    for(int i=0;i<n;i++)
        cin >> a[i][i];
    for(int i=0;i<n;i++)    {
        int x = i, y = i;
        for(int j=0;j<a[i][i]-1;j++)  {
            if(y-1 >= 0 && a[x][y-1] == -1) {
                y--;
                a[x][y] = a[i][i];
            }
            else if(x+1 < n && a[x+1][y] == -1) {
                x++;
                a[x][y] = a[i][i];
            }
            else {
                cout << -1;
                return;
            }
        }
    }
    for(int i=0;i<n;i++)    {
        for(int j=0;j<=i;j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
}

int main()	{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin >> t;
    while(t--)	{
        subMain();
        cout << "\n";
    }
    return 0;
}