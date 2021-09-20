#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n, t;
    cin >> n >> t;
    int k;
    cin >> k;
    int l = 1, r = n;
    int mid;
    while(l <= r)   {
        if(l == r){
            cout << "! " << l << endl;
            break;
        }
        int mid = (l+r)/2;
        cout << "? " << 1 << " " << mid << endl;
        int x;
        cin >> x;
        if(mid - x >= k)    {
            r = mid;
        }
        else
            l = mid+1;
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