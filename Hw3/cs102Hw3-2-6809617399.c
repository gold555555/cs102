#include <stdio.h>
#include <stdlib.h>
int main()
{
    char text[27], c;
    int i = 0, j = 0, count = 0, temp[27] = {0}, arr[27] = {0}, sum = 0, check = 0;
    scanf("%s", text);
    for (i = 0; text[i] != '\0'; i++)
    {
        c = text[i];
        if (c >= 'A' && c <= 'Z')
        {
            arr[c - 'A']++;
            temp[c - 'A']++;
        }
    }
    for (i = 0; i < 27; i++)
    {
        if (temp[i] > 1)
        {
            sum += temp[i] - 1;
            // temp[i] = 1;
        }
    }
    for (i = 0; i < 27; i++)
    {
        if (temp[i] == 0 && sum > 0)
        {
            temp[i]++;
            sum--;
        }
    }
     /*for (i = 0; i < 27; i++)
    {
        printf("%d,",arr[i]);
    }
    printf("\n");
     for (i = 0; i < 27; i++)
    {
        printf("%d,",temp[i]);
    }*/
    for (i = 0; i < 27; i++)
    {
        if (arr[i] == temp[i])
        {
            check = 1;
        }
        else
        {
            check = 0;
            break;
        }
    }
    //printf("\ncheck %d\n",check);
    if (check == 0)
    {
        for (i = 0; i < 27; i++)
        {
            if (arr[i] > 1)
            {
                printf("%c\n", 'A' + i);
            }
        }
        for (i = 0; i < 27; i++)
        {
            if (arr[i] == 0 && temp[i] == 1)
            {
                printf("%c", 'A' + i);
            }
        }
    }else{
        printf("NO MISSING");
    }
}