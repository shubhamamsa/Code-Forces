#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;
  
// set<int>prime;

// void createPrime()	{
// 	prime.insert(2);
// 	for(int i=3;i<=1000000;i++)	{
// 		int flag = 1;
// 		for(auto j: prime)	{
// 			if(j*j > i)
// 				break;
// 			else	{
// 				if(i%j == 0)	{
// 					flag = 0;
// 					break;
// 				}
// 			}
// 		}
// 		if(flag)
// 			prime.insert(i);
// 	}
// }

// long long replace(long long x)	{
// 	if(x == 1)
// 		return 1;
// 	map<long long, long long>find;
// 	auto i = prime.begin();
// 	while(prime.find(x) == prime.end())	{
// 		if(x%(*i)!= 0)	{
// 			i++;
// 		}
// 		else	{
// 			x/=(*i);
// 			find[*i]++;
// 		}
// 	}
// 	find[x]++;
// 	long long prod = 1;
// 	for(auto k: find)	{
// 		if(k.second%2!=0)
// 			prod*=k.first;
// 	}
// 	return prod;
// }

long long prime[1000001] = { 0 }; 
  
// Array k[] to store the value of k for 
// each element in arr[] 
long long k[1000001] = { 0 }; 

void Sieve() 
{ 
    // Initialize k[i] to i 
    for (int i = 1; i < 1000001; i++) 
        k[i] = i; 
  
    // Prime Sieve 
    for (int i = 2; i < 1000001; i++) { 
  
        // If i is prime then remove all 
        // factors of prime from it 
        if (prime[i] == 0) 
            for (int j = i; j < 1000001; j += i) { 
  
                // Update that j is not 
                // prime 
                prime[j] = 1; 
  
                // Remove all square divisors 
                // i.e. if k[j] is divisible 
                // by i*i then divide it by i*i 
                while (k[j] % (i * i) == 0) 
                    k[j] /= (i * i); 
            } 
    } 
} 

void subMain()	{
	long long n;
	cin >> n;
	long long arr[n];
	map<long long, long long>count;
	for(int i=0;i<n;i++)	{
		cin >> arr[i];
		arr[i] = k[arr[i]];
		count[arr[i]]++;
	}
	long long a = 0, b=0;
	for(auto i: count)	{
		if(i.first == 1)	{
			b+=i.second;
			if(a < i.second)
			a = i.second;
		}
		else	{
		if(i.second%2==0)
			b+=i.second;
		if(a < i.second)
			a = i.second;
		}
	}
	long long q, r;
	cin >> q;	
	while(q--)	{
		cin >> r;
		if(r == 0)
			cout << a;
		else
			cout << (a>b?a:b);
		cout << "\n";
	}
}

int main()	{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t = 1;
	cin >> t;
	//createPrime();
	Sieve();
	while(t--)	{
		subMain();
		cout << "\n";
	}	
	return 0;
}