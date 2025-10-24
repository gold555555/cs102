#include <stdio.h>
int main()
{
    int n=0, i=0, index_max = 0, index_min = 0 ,j=0;
    scanf("%d", &n);
    float *ptr ;
    float arr[n], min = 2e9, max = -2e9, sum = 0, avg = 0;
    ptr = &arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%f", (ptr+i));
        if (*(ptr+i) > max)
        {
            max = *(ptr+i);
            index_max = i;
        }
        if (*(ptr+i) < min)
        {
            min = *(ptr+i);
            index_min = i;
        }

        sum += *(ptr+i);
    }
   
    avg = sum / n;
    printf("Maximum value: %.2f\n", max);
    printf("Minimum value: %.2f\n", min);
    printf("Maximum index: %d\n", index_max);
    printf("Minimum index: %d\n", index_min);
    printf("Average: %.2f\n", avg);
    printf("Reverse order: ");
         for ( i = n-1; i >= 0; i--)
        {
            printf("%.2f ",*(ptr+i));
        }
    printf("\nAbove average list: ");
         for ( i = n-1; i >= 0; i--)
        {
            if (*(ptr+i) > avg)
            {
                 printf("%.2f ",*(ptr+i));
            } 
        }

    printf("\nNegative coordinates:");
        for ( i = 0; i < n-1; i++)
        {
            if(*(ptr+i) < 0){
                for (j = i+1; j < n; j++)
                {
                    if (*(ptr+j) < 0)
                    {
                        printf("(%.2f,%.2f), ", *(ptr+i),*(ptr+j));
                    }
                    
                }
                
            }
        }
        
}