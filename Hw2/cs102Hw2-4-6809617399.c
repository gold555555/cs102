#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n , m ,temp =0,x,y;
	printf("Please enter two integers:");
	scanf("%d %d",&n,&m);
	printf("All the numbers that can be divided by 13 are:");
	if(n>=m){
		temp = m;
		m=n;
		n=temp;
	}
	x=n/13;
	y=m/13;
	//printf("%d--",x*13);
	//printf("%d..",n);
	int i;
	if(n > x*13){
		for(i=x+1 ; i<=y ; i++){
			printf("\n%d",i*13);
		}
	}else{
		for(i=x ; i<=y ; i++){
			printf("\n%d",i*13);
		}
	}
	printf("\nBye!!");
	
}