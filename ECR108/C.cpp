#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

void subMain()	{
    long long n;
    cin >> n;
    unordered_map<int, vector<long long>>a;
    int uni[n];
    for(int i=0;i<n;i++)
        cin >> uni[i];
    long long x;
    for(int i=0;i<n;i++)    {
        cin >> x;
        a[uni[i]].push_back(x);
    }
    unordered_map<int, vector<long long>>finali;
    long long maxi = 0;
    for(auto i: a)    {
        sort(i.second.begin(), i.second.end(), greater<long long>());
        for(int j = 1;j<i.second.size();j++) {
            i.second[j]+=i.second[j-1];
        }
        finali[i.first] = i.second;
        if(i.second.size() > maxi)
            maxi = i.second.size();
    }

    long long diff[n+1] = {0};
    for(auto i: finali) {
        for(int j=0;j<i.second.size();j++)  {
            diff[j+1] += i.second[i.second.size()-1-i.second.size()%(j+1)];
        }
    }
    for(int i=1;i<=n;i++)
        cout << diff[i] << " ";
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