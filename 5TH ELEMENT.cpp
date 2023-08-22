 #include <stdio.h>
    int main()
    {
        int arr[100], len, i, j, temp, n;
        printf("Enter the size of array");
 
        scanf("%d", &len);
        printf("\n Enter the array elements");
 
        for (i = 0; i < len; i++) 
        {
            scanf("%d", &arr[i]);
        }
 
        printf("\n Enter Which 5th Number You want");
        scanf("%d", &n);
        printf("\n The 5th number is: %d", arr[n - 1]);
        return 0;
    }
