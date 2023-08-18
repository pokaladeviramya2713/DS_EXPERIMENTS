#include<stdio.h>
int main(){
	int i,arr1[50],arr2[50],mergedarr[100];
	int size1,size2,mergedSize;
	printf("Enter the size of array1:");
	scanf("%d",&size1);
	printf("Enter the elements of array1:");
	for(i=0;i<size1;i++){
		scanf("%d",&arr1[i]);
		}
	printf("Enter the size of array2: ");
	scanf("%d",&size2)	;
		printf("Enter the elements of array2:");
		for(i=0;i<size2;i++){
			scanf("%d",&arr2[i]);
		}
		mergedSize=size1+size2;
		for(i=0;i<size1;i++){
			mergedarr[i]=arr1[i];
		}
		for(i=0;i<size2;i++){
			mergedarr[size1+i]=arr2[i];
		}
		printf("Merged Arrays:");
		for(i=0;i<mergedSize;i++){
			printf("%d",mergedarr[i]);
		}
		return 0;
}
