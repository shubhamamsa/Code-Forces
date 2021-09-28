#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

long long max(long long a, long long b) {
    return a>b?a:b;
}

long long min(long long a, long long b) {
    return a<b?a:b;
}

long long binsearch(long long a[], long long l, long long r, long long k)   {
    while(l < r)    {
        long long mid = (l+r+1)/2;
        if(a[mid] <= k)   {
            l = mid;
        }
        else    {
            r = mid-1;
        }
    }
    return l;
}

void subMain()	{
    long long n;
    cin >> n;
    long long heros[n], power = 0;
    // set<long long>bin, def;
    for(int i=0;i<n;i++)    {
        cin >> heros[i];
        power += heros[i];
    }
    // for(int i=0;i<n;i++)    {
    //     bin.insert(heros[i]);
    //     def.insert(power-heros[i]);
    // }
    sort(heros, heros+n);
    long long m, val = 0;
    cin >> m;
    while(m--)  {
        val = 0;
        long long x, y;
        cin >> x >> y;
        // if(x+y< power) {
            long long index = binsearch(heros, 0, n-1, x);
            val = max(0, x-heros[index])+max(0, y-power+heros[index]);
            // val++;
            while(val < n-1 && heros[val] == heros[val+1])
                val++;
            if(val < n) {
                val = min(0, max(0, x-heros[index])+max(0, y-power+heros[index]));
            }
            cout << val;
        // }
        // else    {
        //     val = max(0, x-heros[0])+max(0, y-power+heros[0]);
        //     cout << val;
        // }
        cout << endl;
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