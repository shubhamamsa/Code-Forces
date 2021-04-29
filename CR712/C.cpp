#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int zero = 0;
    if(s[0] == '0' || s[n-1] == '0')    {
        cout << "NO";
        return;
    }
    for(int i=0;i<n;i++)
        if(s[i] == '0')
            zero++;
    if(zero%2!=0)   {
        cout << "NO";
        return;
    }
    int first[n] = {0}, one = 0;
    zero = 0;
    for(int i=0;i<n;i++)    {
        if(s[i] == '1')
            one++;
        else
            zero++;
    }
    int fhalf = 0;
    for(int i=0;i<n;i++)    {
        if(fhalf >= one/2)
            break;
        if(s[i] == '1') {
            first[i] = 1;
            fhalf++;
        }
    }
    int flag = 1;
    for(int i=0;i<n;i++)    {
        if(s[i] == '0') {
        if(flag == 1)    {
            first[i] = 1;
            flag*=-1;
        }
        else{
            flag*=-1;
        }
        }
    }
    int second[n] = {0};
    for(int i=0;i<n;i++)    {
        if(s[i] == '1')
            second[i] = first[i];
        else    {
            if(first[i] == 0)
                second[i]=1;
            else
                second[i]=0;
        }
    }
    cout << "YES\n";
    for(int i=0;i<n;i++)    {
        if(first[i] == 1)
            cout << '(';
        else
            cout << ')';
    }
    cout << "\n";
    for(int i=0;i<n;i++)    {
        if(second[i] == 1)
            cout << '(';
        else
            cout << ')';
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