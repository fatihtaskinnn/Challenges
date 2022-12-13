// your name surname and age from user

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char name[10],surname[20];
	int c;
	
	printf("please enter your name.");
	scanf("%s",&name);
	
	printf("please enter your surname.");
	scanf("%s",&surname);
	
	printf("please enter your age");
	scanf("%d",&c);
	
	printf("%s %s %d",name,surname,c);
	
	
	
	
	
	
	
	
	
	return 0;
}
