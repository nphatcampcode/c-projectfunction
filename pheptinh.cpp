#include <stdio.h>
#include <math.h>
//ham +-*/
int cong(int a, int b) {
	printf("\nNhap vao 2 so a(khoang cach) b: ");
    scanf("%d%d", &a, &b);
	int sum = a+b;
	printf("= %d", sum)	;
}
int tru(int a, int b) {
	printf("\nNhap vao 2 so a(khoang cach) b: ");
    scanf("%d%d", &a, &b);
	int sub= a-b;
	printf("= %d", sub)	;
}
int nhan(int a, int b) {
	printf("\nNhap vao 2 so a(khoang cach) b: ");
    scanf("%d%d", &a, &b);
	int mut = a*b	;
	printf("= %d", mut)	;
}
int chia(int a, int b) {
	printf("\nNhap vao 2 so a(khoang cach) b: ");
    scanf("%d%d", &a, &b);
	int div = a/b	;
	printf("= %d", div)	;

}
//ham main
int main() {
	char pheptinh;
	int a,b	;
	int sum, sub, mut, div;
	printf("Moi ban nhap vao phep tinh");
	scanf("%s", &pheptinh);
	
	if (pheptinh == '+')
	{
		cong(a,b);
	}
	else if (pheptinh == '-')
	{
		tru(a,b);
	}
	else if (pheptinh == '*')
	{
		nhan(a,b);
	}
	else if (pheptinh == '/')
	{
		chia(a,b);
	}
	else
		printf("Error")	;
		
		return 0;
}
