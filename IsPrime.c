/*
 ============================================================================
 Name        : PointersInC.c
 Author      : SSS
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
char* primeOrNot (int num);
int main(void) {
	int a=10;
	int* p;
	p=&a;
	//*p=20;
	//printf("%d \n",a);
//	printf("%d \n",p);
//	printf("%d \n",&a);
//	printf("%d \n",*p);
//
//	printf("%d \n",*p+1);
//
//	printf("%d \n",p+1);
	int i=0;
	   for(i=0;i<1000000;i++){
		   printf("%i \t %s\n",i,primeOrNot(i));
	   }
	    	return EXIT_SUCCESS;
}

char* primeOrNot (int num){
    if(num<2){
    	return "NOT PRIME";
    }
	else {
		int i=0;
		int flag = 1;

		for (i = 2; i <= sqrt(num); i++) {
			if(num%i==0) {
				flag=0;
				break;
			}
		}
		if(flag == 1) return "PRIME";
	}
    return "NOT PRIME";
}
