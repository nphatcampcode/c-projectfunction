#include <stdio.h>
#include <conio.h>
//ham nhap xuat tien luong nhan vien
int nhapxuat( int luong, int thuong) 
{

	printf("\nNhap vao tien luong cua nhan vien:(vnd) ");
	scanf("%d", &luong);
	
	printf("\nNhap vao tien thuong cua nhan vien:(vnd) ");
	scanf("%d", &thuong);

	printf("====================================");
	printf("\nTong tien luong nhan vien la:%d VND ",luong + thuong);

}
//ham main
int main() 
{
	char name[50]; 
	int luong, thuong;
	
	printf("Nhap vao ten nhan vien: ");
	fgets(name, sizeof(name), stdin);
	
	nhapxuat( luong, thuong);//goi ham nhap xuat
	
	printf("\nTen nhan vien la:");
	puts(name);
	
	getch();
	return 0;
}
