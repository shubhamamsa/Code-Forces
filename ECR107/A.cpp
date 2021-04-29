#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n;
    cin >> n;
    int r, count=0;
    for(int i=0;i<n;i++)    {
        cin >> r;
        if(r == 1 || r == 3)
            count++;
    }
    cout << count;
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