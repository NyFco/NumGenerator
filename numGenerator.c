#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomnum(void);
void meghdardahi(int x[]);
void printer(int a[]);

int main()
{
    int a[10];
    srand(0);
    meghdardahi(a);
    printer(a);
    
    return 0;
}

int randomnum(void){
	
	int a,b,c,x;
	
	a = (rand()%9)+1;
	b = (2 * (rand()%9)) + 1;
	c = 2 * (rand()%10);
	
	b %= 10;
	c %= 10;
	
	x = (a*100) + (b*10) + c;

	return x;
}

void meghdardahi(int x[]){
	
	int i;
	for(i=0;i<10;i++){
		x[i] = randomnum();
	}
	
}


void printer(int a[]){
	
	int i;
	
	for(i=0;i<10;i++){
    	printf("%d\n", a[i]);
	}
	
}
