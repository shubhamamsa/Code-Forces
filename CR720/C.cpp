#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n;
    cin >> n;
    if(n == 3)  {
        int x1, y1, x2, y2;
        cout << "? 1 " << 1 << " " << 2 << " " << 2 << endl;
        cin >> x1;
        if(x1 == 2) {
            cout << "? 1 " << 2 << " " << 1 << " " << 2 << endl;
            cin >> x1;
        }
        cout << "? 2 " << 1 << " " << 2 << " " << 1 << endl;
        cin >> y1;
        if(y1 == 2) {
            cout << "? 2 " << 2 << " " << 1 << " " << 1 << endl;
            cin >> y1;
        }
        cout << "? 1 " << 2 << " " << 3 << " " << 2 << endl;
        cin >> x2;
        if(x2 == 2) {
            cout << "? 1 " << 3 << " " << 2 << " " << 2 << endl;
            cin >> x2;
        }
        cout << "? 2 " << 2 << " " << 3 << " " << 1 << endl;
        cin >> y2;
        if(y2 == 2) {
            cout << "? 2 " << 3 << " " << 2 << " " << 1 << endl;
            cin >> y2;
        }
        int a[3] = {0};
        if(x1 == x2)    {
            a[0] = y1;
            a[1] = x1;
            a[2] = y2;
        }
        else if(x1 == y2)   {
            a[0] = y1;
            a[1] = x1;
            a[2] = x2;
        }
        else if(x2 == y1)   {
            a[0] = x1;
            a[1] = y1;
            a[2] = y2;
        }
        else if(y1 == y2)   {
            a[0] = x1;
            a[1] = y1;
            a[2] = x2;
        }
        cout << "! " << a[0] << " " << a[1] << " " << a[2] << endl;
        return;
    }
    int x, y;
    vector<pair<int, int>>count1, count2;
    for(int i=1;i<n-n%4;i+=2)    {
        cout << "? 1 " << i << " " << i+1 << " " << n-1 << endl;
        cin >> x;
        if(x == n-1)  {
            cout << "? 1 " << i+1 << " " << i << " " <<  n-1 << endl;
            cin >> x;
        }
        cout << "? 2 " << i << " " << i+1 << " " <<  1 << endl;
        cin >> y;
        if(y == 2)  {
            cout << "? 2 " << i+1 << " " << i << " " <<  1 << endl;
            cin >> y;
        }
        count1.push_back({x, y});
    }
    for(int i=2;i<n-n%4;i+=4)   {
        cout << "? 1 " << i << " " << i+1 << " " << n-1 << endl;
        cin >> x;
        if(x == n-1)  {
            cout << "? 1 " << i+1 << " " << i << " " <<  n-1 << endl;
            cin >> x;
        }
        cout << "? 2 " << i << " " << i+1 << " " << 1 << endl;
        cin >> y;
        if(y == 2)  {
            cout << "? 2 " << i+1 << " " << i << " " << 1 << endl;
            cin >> y;
        }
        count2.push_back({x, y});
    }
    int a[n] = {0};
    for(int i=0;i<count2.size();i++)    {
        if(count2[i].first == count1[2*i].first)   {
            a[4*i+1] = count1[2*i].first;
            a[4*i] = count1[2*i].second;
            if(count2[i].second == count1[2*i+1].first) {
                a[4*i+2] = count1[2*i+1].first;
                a[4*i+3] = count1[2*i+1].second;
            }
            else{
                a[4*i+3] = count1[2*i+1].first;
                a[4*i+2] = count1[2*i+1].second;
            }
        }
        else if(count2[i].first == count1[2*i].second)   {
            a[4*i] = count1[2*i].first;
            a[4*i+1] = count1[2*i].second;
            if(count2[i].second == count1[2*i+1].first) {
                a[4*i+2] = count1[2*i+1].first;
                a[4*i+3] = count1[2*i+1].second;
            }
            else{
                a[4*i+3] = count1[2*i+1].first;
                a[4*i+2] = count1[2*i+1].second;
            }
        }
        else if(count2[i].second == count1[2*i].first)   {
            a[4*i+1] = count1[2*i].first;
            a[4*i] = count1[2*i].second;
            if(count2[i].first == count1[2*i+1].first) {
                a[4*i+2] = count1[2*i+1].first;
                a[4*i+3] = count1[2*i+1].second;
            }
            else{
                a[4*i+3] = count1[2*i+1].first;
                a[4*i+2] = count1[2*i+1].second;
            }
        }
        else if(count2[i].second == count1[2*i].second)   {
            a[4*i] = count1[2*i].first;
            a[4*i+1] = count1[2*i].second;
            if(count2[i].first == count1[2*i+1].first) {
                a[4*i+2] = count1[2*i+1].first;
                a[4*i+3] = count1[2*i+1].second;
            }
            else{
                a[4*i+3] = count1[2*i+1].first;
                a[4*i+2] = count1[2*i+1].second;
            }
        }
    }
    for(int i=n-n%4;i<n;i++)    {
        cout << "? 1 " << i << " " << i+1 << " " << n-1 << endl;
        cin >> x;
        if(x == n-1)  {
            cout << "? 1 " << i+1 << " " << i << " " <<  n-1 << endl;
            cin >> x;
        }
        cout << "? 2 " << i << " " << i+1 << " " << 1 << endl;
        cin >> y;
        if(y == 2)  {
        cout << "? 2 " << i+1 << " " << i << " " << 1 << endl;
        cin >> y;
        }
        if(a[i-1] == x)
            a[i] = y;
        else
            a[i] = x;
    }
    cout << "! ";
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;
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