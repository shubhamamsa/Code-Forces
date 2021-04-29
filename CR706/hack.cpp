#include<bits/stdc++.h>
using namespace std;
int a[200000];
int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		int n,k;
		scanf("%d%d",&n,&k);
		for (int i=1;i<=n;++i) scanf("%d",&a[i]);
		if (k==0){
			printf("%d\n",n);
			continue;
		}
		sort(a+1,a+n+1);
		int num=0;
		for (int i=1;i<=n;++i)
		if (num==a[i]) ++num;
		else break;
		if (num>a[n]){
			printf("%d\n",n+k);
		}else{
			int ans=1;
			for (int i=1;i<=n;++i)
			if (a[i]==(num+a[n]+1)/2){
				--ans;
				break;
			}
			printf("%d\n",n+ans);
		}
	}
	return 0;
}