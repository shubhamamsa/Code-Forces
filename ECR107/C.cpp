#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n, q;
    cin >> n >> q;
    int x, top;
    int count[51] ={0};
    for(int i=1;i<=n;i++)   {
        cin >> x;
        if(count[x] == 0)
            count[x] = i;
    }
    int t;
    while(q--)  {
        cin >> t;
        cout << count[t] << ' ';
        for(int i=1;i<51;i++)   {
            if(count[i] < count[t])
                count[i]++;
        }
        count[t] = 1;
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