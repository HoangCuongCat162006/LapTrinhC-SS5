#include <stdio.h>

int main(){
	
	int n;
	int sum=0;
	
	do{
		printf("Nhap mot so nguyen duong : ");
		scanf("%d",&n);
		
		if(n<=0);{
		printf("So ban nhap khong hop le , hay nhap mot so nguyen duong \n");
		}
		
		
		
	}while (n<=0);
	for (int i=1 ;i<=n;i++){
		sum+=i;
		
		printf("Tong cac so tu 1 den %d la : %d\n",n,sum);
	}
	return 0;
}
