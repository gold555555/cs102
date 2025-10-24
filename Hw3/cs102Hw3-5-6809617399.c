#include <stdio.h>
int readSquare(int arr[8][8], int N)
{
    int i = 0, j = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

int findMagicNumber(int arr[8][8], int N)
{
    int i = 0, j = 0, z = 0, num = 0, sum_j = 0, sum_i = 0, temp = 0, check = 0;
    int result[2 * N + 2];
    for (z = 0; z < N; z++)
    {
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
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

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i == j) // ทะแยง
            {
                sum_j += arr[i][j];
            }
            if (i + j == N - 1)
            {
                sum_i += arr[i][j];
            }
        }
    }
    result[num] = sum_j;
    num++;
    result[num] = sum_i;
    num++;
    /*for ( i = 0; i < 2*N+2; i++)
   {
       printf("%d ,",result[i]);

   }
   printf("\n");*/
    for (i = 1; i < 2 * N + 2; i++)
    {
        if (result[0] == result[i])
        {
            check = result[0];
           
        }
        else
        {
            check = -1;
            
            break;
        }
    }
    if (check > -1)
    {
        return result[0];
    }else{
         return -1 ;
    }
    
}

int main()
{
    int n, check;
    scanf("%d", &n);
    int arr[8][8];
    readSquare(arr, n);
    check = findMagicNumber(arr, n);
    if (check > -1)
    {
        printf("Your square is a magic square!! with the magic constant = %d.", check);
    }
    else
    {
        printf("Your square is NOT a magic square.");
    }
}