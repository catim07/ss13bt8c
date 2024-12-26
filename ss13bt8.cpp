#include<stdio.h>
int ucln(int a,int b){
	while(b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
int main(){
	int num1,num2;
	printf("moi ban nhap so thu nhat: ");
	scanf("%d",&num1);
	printf("moi ban nhap so thu hai: ");
	scanf("%d",&num2);
	int total=ucln(num1,num2);
	printf("uoc chung lon nhat cua %d va %d la %d",num1,num2,total);
	return 0;
}
