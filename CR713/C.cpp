#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    long long a, b;
    cin >> a >> b;
    cin.ignore();
    char s[a+b+1];
    cin.getline(s, a+b+1);
    long long n = a+b;
    long long count0 = a, count1 = b;
    for(int i=0;i<n;i++)    {
        if(s[i] == '0')
            count0--;
        else if(s[i] == '1')
            count1--;
    }
    if(count0 < 0 || count1 < 0)    {
        cout << "-1";
        return;
    }
    for(int i=0;i<n/2;i++)  {
        if(s[i] != s[n-i-1])    {
            if(s[i] == '?') {
                if(s[n-i-1] == '0' && count0 > 0)   {
                    s[i] = '0';
                    count0--;
                }
                else if(s[n-i-1] == '1' && count1 > 0)  {
                    s[i] = '1';
                    count1--;
                }
                else {
                    cout << "-1";
                    return;
                }
            }
            else if(s[n-i-1] == '?') {
                if(s[i] == '0' && count0 > 0)   {
                    s[n-i-1] = '0';
                    count0--;
                }
                else if(s[i] == '1' && count1 > 0)  {
                    s[n-i-1] = '1';
                    count1--;
                }
                else {
                    cout << "-1";
                    return;
                }
            }
            else{
                cout << "-1";
                return;
            }
        }
        else if(s[i] == '?' && s[n-i-1] == '?')    {
            if(count1 > 1) {
                s[i] = '1';
                s[n-i-1] = '1';
                count1-=2;
            }
            else if(count0 > 1) {
                s[i] = '0';
                s[n-i-1] = '0';
                count0-=2;
            }
            else{
                cout << "-1";
                return;
            }
        }
    }
    if(n%2!=0)  {
    int x = n/2;
    if(s[x] == '?') {
        if(count0 > 0)  {
            s[x] = '0';
            count0--;
        }
        else if(count1 > 0) {
            s[x] = '1';
            count1--;
        }
        else    {
            cout << "-1";
            return;
        }
    }
    }
    if(count0!=0 || count1!=0)  {
        cout << -1;
        return;
    }
    cout << s;
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