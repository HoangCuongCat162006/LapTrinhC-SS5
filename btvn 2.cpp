#include <stdio.h>

int main(){
	int num1 = 19;
	int num2;
	
	printf("Hay nhap so trung voi mot so da cho truoc \n ");
	do{
		printf("Nhap mot so : ");
		scanf("%d", &num2);
		
		if(num2<num1){
			printf("So ban vua nhap be hon so da cho truoc \n");	
		}else if(num2>num1){
			printf("So ban vua nhap lon hon so da cho truoc \n");
		}else 
		    printf("Ban da doan dung so da cho truoc , xin chuc mung \n");
	}while (num2!=num1);
	
	
	return 0;
}
