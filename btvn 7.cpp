#include <stdio.h>

	int timucln(int a, int b){
		while (b !=0){
			int temp=b;
			b = a%b;
			a=temp;
		}
			return a;
	}
	
	int main (){
		int num1,num2;
		
		do{
			printf("Nhap so nguyen thu nhat : ");
			scanf("%d",&num1);
		if (num1 <= 0) {
			printf("vui long nhap lai so lon hon 0 \n ");
		}
	}while (num1 <= 0 );
	    do {
	   	    printf("Nhap so nguyen thu hai : ");
		    scanf("%d",&num2);
		if (num2<=0){
			printf("Vui long nhap so lon hon 0 ");
		}
	}while (num2<=0);
	int ucln = timucln(num1,num2);
	
	printf ("Uoc chung lon nhat cua %d va %d = %d \n ",num1,num2,ucln);
	return 0;
	}
	


