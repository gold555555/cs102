#include <stdio.h>
int main()
{
    int n, i = 0, j = 0, z = 0, num = 0, sum_j = 0, sum_i = 0, temp = 0 ,check= 1;
    scanf("%d", &n);
    int arr[n][n], result[2 * n + 2];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (z = 0; z < n; z++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (j == temp)
                {
                    sum_j += arr[i][j];
                }
                if (i == temp)
                {
                    sum_i += arr[i][j];
                }
            }
        }
        result[num] = sum_j;
        num++;
        sum_j = 0;
        result[num] = sum_i;
        num++;
        sum_i = 0;
        temp++;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j) // ทะแยง
            {
                sum_j += arr[i][j];
            }
            if (i + j == n - 1)
            {
                sum_i += arr[i][j];
            }
        }
    }
    result[num] = sum_j;
    num++;
    result[num] = sum_i;
    num++;
     /*for ( i = 0; i < 2*n+2; i++)
    {
        printf("%d ,",result[i]);
        
    }
    printf("\n");*/
    for ( i = 1; i < 2*n+2; i++)
    {
        if (result[0] == result[i])
        {
            check = 1;
        }else{
            check = 0 ;
            break;
        }
        
    }
    if (check)
    {
        printf("This is a magic square!");
    }else{
        printf("This is NOT a magic square!");
    }
    
    
}