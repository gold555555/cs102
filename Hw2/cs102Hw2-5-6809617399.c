#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,m[5],y=0,sum=0;
	printf("Please enter your ticket number <xxxxx>: ");
	scanf("%d",&n);
	int i ,x=10000;
	for(i = 0 ; i<5;i++){
		m[i]=n/x;
		n=n%x;
		x=x/10;
		y+=m[i];
	}
	x=y;
	y=y/10;
	x=x%10;
	sum = x+y;
	printf("Your number is: %d\n",sum);
	switch(sum){
		case 0:printf("Your prediction is: Bad luck");break;
		case 1:printf("Your prediction is: Good luck :)");break;
		case 2:printf("Your prediction is: Will meet your soul-mate soon^__^");break;
		case 3:printf("Your prediction is: Should make merit");break;
		case 4:printf("Your prediction is: Lucky in love");break;
		case 5:printf("Your prediction is: Need more rest!");break;
		case 6:printf("Your prediction is: Beware of an accident @_@");break;
		case 7:printf("Your prediction is: Lucky in game");break;
		case 8:printf("Your prediction is: Looking good");break;
		case 9:printf("Your prediction is: Will get some money soon.");break;
		
	}
	
	
	
}