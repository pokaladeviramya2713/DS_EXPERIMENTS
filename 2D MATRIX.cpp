
    
    
   #include <stdio.h>

int search(int **M , int x , int y){
    
    int i , j;
    
    int max;
    
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            if(M[i][j] > max){
                max = M[i][j];
            }
        }
    }
    
    return max;
}

int main(){
    
    int n , m;
    
    do{
        scanf("%d" , &n);
        
    }while(n<2 || n>5);
    
    do{
        scanf("%d" , &m);
        
    }while(m<2 || m>8);
    
    int A[n][m];

    int i , j;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d" , &A[i][j]);
        }
    }

    int r = search(**A , n , m);
    
    printf("RESULTS:\n");
    printf("%d" , r);
    
    return 0;
}
