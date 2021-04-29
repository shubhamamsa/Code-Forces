#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n, k;
    cin >> n >> k;
    string s = "a";
    set<char>chars[k];
    for(int i=1;i<n;i++)    {
        int flag = 0;
        for(int j=0;j<k;j++)    {
            if(chars[s[i-1]-'a'].find(char('a'+j)) == chars[s[i-1]-'a'].end() && chars[j].size() < k)    {
                s+=char('a'+j);
                chars[s[i-1]-'a'].insert(char('a'+j));
                flag = 1;
                break;
            }
        }
        if(flag == 0)   {
            for(int i=0;i<k;i++)
                chars[i].clear();
        i--;
        }
    }
    cout << s;
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