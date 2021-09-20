#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n;
    cin >> n;
    if(n == 2)  {
        cout << -1;
        return;
    }
    int a[n][n];
    int temp = 1, index = 0;
    for(int i=0;i<n*n;i++)  {
        if(index >= n*n)
            index = 1;
        a[index/n][index%n] = temp++;
        index+=2;
    }
    for(int i=0;i<n;i++)    {
        for(int j=0;j<n;j++)
            cout << a[i][j] << " ";
        cout << "\n";
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