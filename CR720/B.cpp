#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int min = 0;
    for(int i=1;i<n;i++)
        if(a[min] > a[i])
            min = i;
    vector<vector<int>>answer;
    if(min != 0)
        answer.push_back({1, min+1, a[min], a[min]+1});
    for(int i=1;i<n;i++)    {
        if(i%2 != 0)
            answer.push_back({1, i+1, a[min], a[min]+1});
        else
            answer.push_back({1, i+1, a[min], a[min]});
    }
    cout << answer.size() << "\n";
    for(int i=0;i<answer.size();i++)
        cout << answer[i][0] << " " << answer[i][1] <<  " " << answer[i][2] <<  " " << answer[i][3] << "\n";
}

int main()	{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)	{
        subMain();
    }
    return 0;
}