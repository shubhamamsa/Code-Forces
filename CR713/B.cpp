#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n;
    cin >> n;
    string s[n];
    int fx, fy, lx, ly;
    int count = 0;
    for(int i=0;i<n;i++)
        cin >> s[i];
    for(int i=0;i<n;i++)    {
        for(int j=0;j<n;j++)    {
            if(s[i][j] == '*')  {
                if(count == 0)  {
                    fx = i;
                    fy = j;
                    count++;
                }
                else    {
                    lx = i;
                    ly = j;
                }
            }
        }
    }
    int ansfy, ansfx, ansly, anslx;
    if(ly == fy)    {
        ansfx = fx;
        anslx = lx;
        if(ly == n-1) {
            ansfy = 0;
            ansly = 0;
        }
        else    {
            ansfy = n-1;
            ansly = n-1;
        }
    }
    else if(lx == fx)    {
        ansfy = fy;
        ansly = ly;
        if(lx == n-1) {
            ansfx = 0;
            anslx = 0;
        }
        else    {
            ansfx = n-1;
            anslx = n-1;
        }
    }
    else {
        ansfx = fx;
        ansfy = ly;
        anslx = lx;
        ansly = fy;
    }
    count = 0;
    for(int i=0;i<n;i++)    {
        for(int j=0;j<n;j++)    {
            if(count == 0)  {
                if(i == ansfx && j == ansfy)  {
                    cout << '*';
                    count++;
                }
                else
                    cout << s[i][j];
            }
            else    {
                if(i == anslx && j == ansly)  {
                    cout << '*';
                    count++;
                }
                else
                    cout << s[i][j];
            }
        }
        cout << "\n";
    }
}

int main()	{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	{
        subMain();
        // cout << "\n";
    }
    return 0;
}