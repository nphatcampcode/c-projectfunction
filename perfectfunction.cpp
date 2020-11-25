#include <stdio.h>
//ham tim so hoan hao
int perfect(int i, int n, int sum=0) {
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	for(i = 1 ; i < n ; i++)   
  {   
   if(n % i == 0)   
     sum = sum + i ;   
  }    

 if (sum == n)   
    printf("\n %d la so hoan hao", n) ;   
 else   
    printf("\n%d khong phai so hoan hao", n) ;
}
//ham main
int main() {
	int i,n,sum;
	perfect(i,n,sum);
	return 0;
}
