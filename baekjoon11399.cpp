#include<stdio.h>
#include<algorithm>
int main(){
	int n, min, i, result, k, output;
	result = 0;
	output = 0:
	scanf("%d",&n);
	int pArray[n];
	for(i=0;i<n;i++){
		scanf("%d", &pArray[i]);
	}
	for(i=0;i<n;i++){
		min = pArray[0];
		k = 0;
		for(i=1;i<n;i++){
			if(min > pArray[i]){
			k = i;
			min = pArray[i];
			break;
			}
		}
		pArray[k] = 9999;
		result += min;
		output += result;
	}
	
	return 0;
}
