#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int zero = 0, one = 0;
    int pre[n] = {0};
    int counter[n] = {0}, count = 0;;
    for(int i=0;i<n;i++)    {
        if(a[i] == '0')
            zero++;
        else
            one++;
        if(zero == one) {
            pre[i] = 1;
        }
    }
    int flag = -1;
    for(int i=n-1;i>=0;i--) {
        if(flag == -1)  {
            if(a[i] != b[i]) {
                if(pre[i] == 1) {
                    flag *=-1;
                }
                else    {
                    cout << "NO";
                    return;
                }
            }
        }
        else    {
            if(a[i] == b[i]) {
                if(pre[i] == 1) {
                    flag *=-1;
                }
                else    {
                    cout << "NO";
                    return;
                }
            }
        }
    }
    cout << "YES";
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