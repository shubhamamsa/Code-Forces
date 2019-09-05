#include<iostream>
 
using namespace std;
 
int main()  {
    string n;
    int count = 0, sum = 0;
    getline(cin, n);
    if(n.length() == 1)
        count = 0;
    else    {
        while(n.length() != 1)   {
            for(int i = 0;i<n.length();i++)
                sum += int(n[i]) - 48;
            count++;
        n = to_string(sum);
        sum = 0;
        } 
    }
    cout << count;
    return 0;
}
