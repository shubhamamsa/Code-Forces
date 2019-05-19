#include<iostream>

using namespace std;

int main()  {
    int n, a[3], submissions = 0, check = 0;
    cin >> n;
    for(int i = 0;i < n;i ++)    {
        check = 0;
        for(int j = 0;j < 3;j ++)    {
            cin>>a[j];
            if(a[j]==1)
                check ++;
            }
        if(check>=2)
            submissions ++;
    }
    cout << submissions << endl;
    
    return 0;
}