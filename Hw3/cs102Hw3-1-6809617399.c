#include <stdio.h>
int main()
{
    int n=0, i=0, index_max = 0, index_min = 0 ,j=0;
    scanf("%d", &n);
    float arr[n], min = 2e9, max = -2e9, sum = 0, avg = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
            index_max = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            index_min = i;
        }

        sum += arr[i];
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
            printf("%.2f ",arr[i]);
        }
    printf("\nAbove average list: ");
         for ( i = n-1; i >= 0; i--)
        {
            if (arr[i] > avg)
            {
                 printf("%.2f ",arr[i]);
            } 
        }

    printf("\nNegative coordinates:");
        for ( i = 0; i < n-1; i++)
        {
            if(arr[i] < 0){
                for (j = i+1; j < n; j++)
                {
                    if (arr[j] < 0)
                    {
                        printf("(%.2f,%.2f), ", arr[i],arr[j]);
                    }
                    
                }
                
            }
        }
        
}