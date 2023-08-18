#include<stdio.h>
int main(){
	int a[10][10],b[10][10],c[10][10],n,i,j,k;
	printf("Enter the order of matrix:");
	scanf("%d",&n);
	printf("Enter the elements of Matrix-A:");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter elements of Matrix-B:");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=0;
		for(k=0;k<n;k++){
			c[i][j]+=a[i][j]*b[i][j];
		}
	}
	}
	printf("Product of Two Matrices:");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
