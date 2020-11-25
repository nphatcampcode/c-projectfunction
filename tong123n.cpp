#include <stdio.h>
//khai bao ham
unsigned int tong(int s, int n, int i) {
	printf("Nhap vao n so: ");
	scanf("%d", &n);
	if (n>0) {
	for (i=1;i<=n;i++) {
		s += i;
	}
	printf("Tong s = %d ", s);
}
	else 
		printf("ERROR");
}
//ham main
int main() {
	int s,n,i;
	tong(s,n,i)	;
	return 0;
}

