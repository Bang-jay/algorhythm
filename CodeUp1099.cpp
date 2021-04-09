#include<stdio.h>
int main()
{
	int i, j, k, temp;
    int a[10][10] = {};
    for(i=0; i<10; i++){
    	for(j=0; j<10; j++){
    		scanf("%d", &a[i][j]);
		}
	}
	k = 1;
	for(i=1; i<9; i++){
    	for(j=k; j<9; j++){
    		temp = a[i][j];
    		a[i][j] = 9;
    		if(a[i][j+1] == 1) {
    			k = j;
    			break;
			}
			if(temp == 2) break;	
		}
		if(temp == 2) break;
	}
	
    
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
		    printf("%d ", a[i][j]);
			}
	printf("\n");
	}
					
    return 0;
}
