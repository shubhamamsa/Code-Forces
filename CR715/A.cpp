#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n;
    cin >> n;
    vector<int>odd, even;
    int x;
    for(int i=0;i<n;i++)    {
        cin >> x;
        if(x%2!=0)
            odd.push_back(x);
        else
            even.push_back(x);
    }
    for(int i=0;i<odd.size();i++)
        cout << odd[i] << " ";
    for(int i=0;i<even.size();i++)
        cout << even[i] << " ";
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