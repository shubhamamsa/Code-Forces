#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

set<int> getTwoPairs(int arr[], int n) {
   map<int, set<int> > hash_table;
   for (int i = 0; i < n; ++i) {
      for (int j = i + 1; j < n; ++j) {
         int sum = arr[i] + arr[j];
         if (hash_table.find(sum) == hash_table.end())  {
            hash_table[sum].insert(i);
            hash_table[sum].insert(j);
         }
         else {
            if(hash_table[sum].find(i) == hash_table[sum].end() && hash_table[sum].find(j) == hash_table[sum].end())    {
                hash_table[sum].insert(i);
                hash_table[sum].insert(j);
                return hash_table[sum];
            }
         }
      }
   }
   set<int>test;
//    cout << "No pairs found";
   return test;
} 

void subMain()	{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    set<int> ans = getTwoPairs(a, n);
    if(ans.size() == 0) {
        cout << "NO";
    }
    else{
        cout << "YES\n";
        int test[4], k= 0;
        for(auto i: ans)
            test[k++] = i;
        if(a[test[0]] + a[test[1]] == a[test[2]] + a[test[3]])  {
            cout << test[0]+1 << ' ' << test[1]+1 << 
            " " << test[2]+1 << " " << test[3]+1;
        }
        else if(a[test[0]] + a[test[2]] == a[test[1]] + a[test[3]])  {
            cout << test[0]+1 << ' ' << test[2]+1 << 
            " " << test[1]+1 << " " << test[3]+1;
        }
        else if(a[test[0]] + a[test[3]] == a[test[2]] + a[test[1]])  {
            cout << test[0]+1 << ' ' << test[3]+1 << 
            " " << test[1]+1 << " " << test[2]+1;
        }
    }
}

int main() {
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