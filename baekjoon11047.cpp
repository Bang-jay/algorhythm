#include<stdio.h>
int main(){
	int n, k, count;
	scanf("%d %d",&n ,&k);
	int pArray[n];
	for(int i=0;i<n;i++){
		scanf("%d", &pArray[i]);
	}
	count = 0;
	while(k > 0){
		for(int i=n-1; n >= 0; i--){
			if(k >= pArray[i]){
				k -= pArray[i];
				count ++;
				break;
			}
		}
	}

	printf("%d", count);
	return 0;
}
