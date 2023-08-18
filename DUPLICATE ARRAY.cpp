#include <stdio.h>  
#include <conio.h>  
int main ()  
{  
    int arr[]={9,7,7,2,1,0,9}; 
	int i, j, k, n;  
    n=sizeof(arr)/sizeof(arr[0]) ; 
    for ( i = 0; i < n; i ++)  
    {  
        for ( j = i + 1; j < n; j++)  
        {  
           
            if ( arr[i] == arr[j])  
            {  
                for ( k = j; k < n - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }  
                 n--;  
                 j--;      
            }  
        }  
    }  
      
    printf (" \n Array elements without duplicate elements: ");  
    for ( i = 0; i < n; i++)  
    {  
        printf (" %d,", arr[i]);  
    }  
    return 0;  
}
