#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n;
    cin >> n;
    int ft=0, fm=0, lt=0;
    string s;
    cin >> s;
    for(int i=0;i<n;i++)    {
        if(s[i] == 'T') {
            if(ft < n/3)
                ft++;
            else    {
                lt++;
                if(lt > fm) {
                    cout << "NO";
                    return;
                }
            }
        }
        else    {
            fm++;
            if(fm > ft) {
                cout << "NO";
                return;
            }
        }
    }
    if(ft == n/3 && fm == n/3 && lt == n/3) {
        cout << "YES";
    }
    else    {
        cout << "NO";
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