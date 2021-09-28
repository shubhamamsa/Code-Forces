#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)   {
        for(int j=0;j<i;j++)
            cout << "(";
        for(int j=0;j<i;j++)
            cout << ")";
        for(int j=i+1;j<=n;j++)
            cout << "()"; 
        cout << '\n';
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