#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int grade;
	int level;
	
	scanf("%d", &grade);
	while (grade > 100 | grade < 0){
		printf("¿é¤J¿ù»~");
		return 0;
	}
	
	level = grade / 10;
	switch(level){
		case 10:
		case 9:
		    printf("A");
		    break;
		case 8:
			printf("B");
		    break;
		case 7:
			printf("C");
		    break;
		case 6:
			printf("D");
		    break;
		default:
			printf("E");
		    break;
	}
	
	return 0;
}
