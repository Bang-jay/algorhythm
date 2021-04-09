#include<stdio.h>
int main()
{
    int n, i, j, x, y;
    int a[19][19] = {};
    for(i=0; i<19; i++){
    	for(j=0; j<19; j++){
    		scanf("%d", &a[i][j]);
		}
	}
	scanf("%d ", &n);
	for(int k=0; k<n; k++){
		scanf("%d %d", &x, &y);
		for(i=0; i<19; i++){
    		for(j=0; j<19; j++){
    			if(i==x-1){
    				if (a[i][j] == 0){ 
    					a[i][j] = 1;
					}
					else{
						a[i][j] = 0;
					}
				}
				if(j==y-1){
					if (a[i][j] == 0){
    					a[i][j] = 1;
					}
					else{
						a[i][j] = 0;
					}
				}
			}
		}
	}
	for(i=0; i<19; i++){
		for(j=0; j<19; j++){
		    printf("%d ", a[i][j]);
			}
	printf("\n");
	}
					
    return 0;
}
