#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char>count;
    for(int i=0;i<n;i++)
        count.insert(s[i]);
    int count1 = 0;
    for(int i=1;i<n;i++)    {
        if(s[i] != s[i-1])
            count1++;
    }
    if(count1+1 == count.size())
        cout << "YES";
    else
        cout << "NO";
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