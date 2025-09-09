#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	  int n[3],temp=0;
	  int i =0,j=0;
        printf("Please enter length of each side of your triangle:");
        for (i = 0; i < 3; i++)
        {
            scanf("%d",&n[i]);
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                if (n[j]>n[j+1])
                {
                    temp=n[j+1];
                    n[j+1]=n[j];
                    n[j]=temp;
                }
                
            }
            
        }
        
       
        
        if(n[0]+n[1]<=n[2]){
        	printf("This is NOT a possible triangle.");
		}else if(n[0]==n[1]||n[1]==n[2]){
			printf("This is an isosceles triangle.");
		}else if(n[0]==n[1]==n[2]){
			printf("This is an equilateral triangle.");
		}else{
			printf("This is a scalene triangle.");
		}
}