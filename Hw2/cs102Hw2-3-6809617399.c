#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int n,h=0,m=0;
	 printf("Please enter the time in seconds:");
	 scanf("%d",&n);
	 
	 h=n/3600;
	 m=(n%3600)/60;
	 n=n%60;
	 
	 
	if(n>=0){
		printf("The time is %d hour(s), %d minute(s), and %d second(s)",h,m,n);
	}else{
		printf("Invalid Input !!");
	} 
}