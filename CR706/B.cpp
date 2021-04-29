#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    long long n, k;
    cin >> n >> k;
    long long a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a, a+n);
    set<long long>distinct;
    for(int i=0;i<n;i++)
        distinct.insert(a[i]);
    long long mex = 0;
    for(auto i: distinct)   {
        if(i != mex)
            break;
        mex++;
    }
    long long max = a[n-1];
    if(mex > max)   {
        cout << distinct.size()+k;
    }    
    else{
        if(k > 0)
        distinct.insert((max+mex)/2 + (max+mex)%2);
        cout << distinct.size();
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