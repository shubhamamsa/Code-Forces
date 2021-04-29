#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n;
    cin >> n;
    int a[n][2];
    for(int i=0;i<n;i++)
        cin >> a[i][0] >> a[i][1];
    int tmp[n], time_taken[n];
    for(int i=0;i<n;i++)
        cin >> tmp[i];
    for(int i=0;i<n;i++)    {
        if(i == 0)
            time_taken[i] = a[0][0];
        else    {
            time_taken[i] = a[i][0]-a[i-1][1];
        }
    }
    int time = 0;
    for(int i=0;i<n;i++)    {
        time+=time_taken[i]+tmp[i];
        if(i != n-1)    {
        if(time+(a[i][1]-a[i][0]+1)/2 > a[i][1])
            time+=(a[i][1]-a[i][0]+1)/2;
        else
            time = a[i][1];
        }
    }
    cout << time;
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