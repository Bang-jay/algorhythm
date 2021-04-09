#include<stdio.h>
int main()
{
    int w, h, n, d, x, y, l;
    scanf("%d %d", &w, &h);
    int a[w][h] = {};
    scanf("%d", &n);
    for(int i=0; i<n; i++){
    	scanf("%d %d %d %d", &l, &d, &x, &y);
    	for(int cell=0; cell<l; cell++){
    		if(d==0){
    			a[x-1][y-1+cell] = 1;
			}
			else{
				a[x-1+cell][y-1] = 1;	
			}
		}
	
    	
	}
    
	for(int i=0; i<w; i++){
		for(int j=0; j<h; j++){
		    printf("%d ", a[i][j]);
			}
	printf("\n");
	}
					
    return 0;
}
