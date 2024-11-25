#include <stdio.h>
	
	int timucln(int a, int b) 	{
		while (b!=0){
			int temp =b;
			b=a%b;
			a=temp;
		}
		return a;
	}
	
	int timbcnn(int a, int b){
		return (a*b) / timucln(a,b);
	}
	
	int main (){
		
		int num1,num2;
	do {
		printf("Nhap so nguyen duong thu nhat : ");
		scanf("%d",&num1);
	if(num1<=0){
		printf("vui long nhap lai, so nguyen phai lon hon 0 \n ");
	}
	}while (num1<=0);
	
	do {
		printf("Nhap so nguyen duong thu hai : ");
		scanf("%d",&num2);
	if(num2<=0){
		printf("vui long nhap lai, so nguyen phai lon hon 0 \n ");
		
	}
	}while( num2<=0 );
	
	int bcnn = timbcnn( num1, num2);
	printf("Boi chung nho nhat cua %d và %d là: %d \n", num1, num2, bcnn);
	
	return 0;
	}
