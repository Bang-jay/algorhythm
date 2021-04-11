#include<stdio.h>
#include<algorithm>
int main(){
	int n, min, i, result, k, output;
	result = 0;
	output = 0;
	scanf("%d",&n);
	int pArray[n];
	for(i=0;i<n;i++){
		scanf("%d", &pArray[i]);
	}
	for(int c=0;c<n;c++){
		min = pArray[0];
		k = 0;
		for(i=1;i<n;i++){
			if(min > pArray[i]){
			k = i;
			min = pArray[i];
			}
		}
		pArray[k] = 9999;
		output += result += min;
	}

	printf("%d", output);
	
	return 0;
}
