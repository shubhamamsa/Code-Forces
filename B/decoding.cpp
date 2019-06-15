#include<iostream>

using namespace std;

int main()  {
    int n, i=0, flag = 1;
    cin >> n;
    cin.ignore();
    char encoded[n+1], decoded[n];
    cin.getline(encoded, n+1);
    //string encoded, decoded="";
    //getline(cin, encoded);
    int half = (n-1)/2;
    if(n%2!=0)  {
        decoded[half] = encoded[i];
        i++;
    }
    for(;i<n;i++)   {
        flag*=-1;
        if(flag == -1)  {
            decoded[half-i] = encoded[i];
            half-=i;
        }
        else    {
            decoded[half+i] = encoded[i];
            half += i;
        }
    }
    //decoded[n+1] = '\0';
    for(i=0;i<n;i++)
        cout << decoded[i];
    cout << endl;
    return 0;
}