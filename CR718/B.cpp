#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n, m, x;
    cin >> n >> m;
    pair<int, int> b[n*m];
    for(int i=0;i<n*m;i++)  {
        cin >> x;
        b[i] = {x, i};

    }
    int count[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            count[i][j] = b[i*m+j].first;
    sort(b, b+n*m);
    for(int i=0;i<m;i++)    {
        swap(count[b[i].second/m][i], count[b[i].second/m][b[i].second%m]);
        for(int j=0;j<n*m;j++)  {
            if(b[j].second == (b[i].second/m)*m+i)
                b[j].second = (b[i].second/m)*m+b[i].second%m;
        }
    }
    for(int i=0;i<n;i++)    {
        for(int j=0;j<m;j++)
            cout << count[i][j] << " ";
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