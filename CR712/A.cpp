#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    string s;
    cin >> s;
    int a[26] = {0};
    for(int i=0;i<s.length();i++)
        a[s[i]-'a']++;
    int flag = 0;
    for(int i=1;i<26;i++)   {
        if(a[i] != 0)
            flag = 1;
    }
    if(!flag)   {
        cout << "NO";
        return;
    }
    a[0]++;
    flag = 0;
    cout << "YES" <<"\n";
    for(int i=0;i<s.length();i++)   {
        if(s[s.length()-i-1] != 'a' && flag == 0)   {
            cout << 'a';
            flag = 1;
        }
        cout << s[i];
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