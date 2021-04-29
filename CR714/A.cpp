#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n, k;
    cin >> n >> k;
    if(k > (n-1)/2) {
        cout << -1;
        return;
    }
    int a[n] = {0};
    int test = 1, temp = n;
    for(int i=1;i<n;i+=2)   {
        if(test > k)
            break;
        a[i] = temp;
        temp--;
        test++;
    }
    temp = 1;
    for(int i=0;i<n;i++)    {
        if(a[i] == 0)   {
            a[i] = temp++;
        }
    }
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
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