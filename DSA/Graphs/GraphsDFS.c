/*Name:N.Yashwanth 
   ID:B171561
   Question:graph dfs
*/

#include<stdio.h>
#include<stdlib.h>

void gdfs(int k,int n,int visit[],int a[n][n]) {
	int j;
	if(visit[k] == 0) {
		visit[k] = 1;
		printf("%d\n",k);
		for(j = 0; j < n; j++) {
			if(a[k][j] == 1 && visit[j] == 0) {
		    	gdfs(j,n,visit,a);
			}
		}
	}
} 


void main() {
	int n , i, j, k;
	printf("Enter the order of matrix:\n");
	scanf("%d", &n);
	int a[n][n];
  	int visit[n];
	for(i = 0; i < n; i++) {
   		visit[i]=0;
	}
	printf("Enter the values of matrix:\n");
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
	    	scanf("%d",&a[i][j]);
		}
	}
	printf("The given matrix is:\n");
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
	      printf("%d\t",a[i][j]);
		}
	  	printf("\n");
	}
	printf("The visiting order is:\n");
	gdfs(k, n, visit, a);
	for(i = 0; i < n; i++) {
	  if(visit[i] != 1) {
	      
	      gdfs(i, n, visit, a);
	   }
	}
}






