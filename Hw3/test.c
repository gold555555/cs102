#include <stdio.h>
    int main(){
        int arr[5] ;
        int *ptr ;
        ptr = arr;
        int i =0 , j = 0 ;
        for ( i = 0; i < 5; i++)
        {
            scanf("%d", (ptr+i));
        }
        
        
        for ( i = 0; i < 5; i++)
        {
            printf("%d,",*(ptr+i));
        }
        
        j = *(ptr+1);
        printf("\nj = %d",j);
    }