#include <stdio.h>

int main(){
	
	int choice;
	float num1,num2;
	
	printf("Nhap so thu nhat : ");
	scanf ("%f",&num1);
	printf("Nhap so thu hai : ");
	scanf("%f",&num2);
	
	do {
		printf("\n-----CALCULATOR-----\n");
		printf("1. Tong hai so :\n " );
		printf("2. Hieu hai so :\n " );
		printf("3. Tich hai so :\n " ); 
		printf("4. Thuong hai so :\n ");
		printf("5. Thoat  \n ");
		printf("Lua chon cua ban :\n");
		scanf("%d",&choice);
		
		switch (choice){
			
			case 1:
				printf("Tong : %2.f + %2.f = %2.f \n",num1,num2,num1+num2);
				break;
			case 2:
			    printf("Hieu : %2.f - %2.f = %2.f \n",num1,num2,num1-num2);
				break;
			case 3:
			    printf("Tich : %2.f x %2.f = %2.f \n ",num1,num2,num1*num2);
				break;
			case 4:
				if(num2!=0) {
					printf("Thuong : %2.f / %2.f = %2.f \n ",num1,num2,num1/num2);	 
				} else {
					printf("Loi , khong the chia het cho 0 \n");
				}
				 break;
		    case 5:
		    	printf("Thoat chuong trinh , Tam biet \n ");
		    	break;
		    default:
			    printf("Lua chon khong hop le , vui long chon lai \n");			    
		}
	}while (choice!=5);
	
	return 0;
}
