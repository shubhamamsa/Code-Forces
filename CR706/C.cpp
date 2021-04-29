#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

long long absl(long long x)  {
    if(x < 0)
        return -x;
    return x;
}

void subMain()	{
    long long n;
    cin >> n;
    vector<long long>miners, mines;
    long long x, y;
    for(int i=0;i<2*n;i++)  {
        cin >> x >> y;
        if(x == 0)  {
            miners.push_back(absl(y));
        }
        else if(y == 0) {
            mines.push_back(absl(x));
        }
    }
    double ans = 0;
    sort(mines.begin(), mines.end());
    sort(miners.begin(), miners.end());
    for(int i=0;i<n;i++)    {
        ans += sqrtl(double(miners[i])*double(miners[i])+double(mines[i])*double(mines[i]));
    }
    cout << setprecision(15) << ans;
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