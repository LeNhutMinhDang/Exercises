/*
+ Loai bo khong trang khong can thiet
+ Viet hoa chu cai dau
+ Tach ho ten lot va ten rieng
*/
#include <stdio.h>
#include <string.h>

#define max 100

void Xspace( char a[]){//loai khoang trang khong can thiet
	int i;
	
	//dem so khoang trang dau chuoi
	int count = 0;
	for(i = 0; i < strlen(a); i++){
		if(a[i] == ' '){
			count++;
		}else{
			break;
		}
	}
	//sau khi dem so khoang trang dau chuoi thi tien hanh cap nhat lai chuoi de loai bo khoang trang dau
	for(i = 0; i < strlen(a); i++){
		a[i] = a[i + count];
	}
	a[strlen(a) - count] = '\0';
	
	int  j;
	//loai bo khoang trang giua cac tu trong chuoi
	for(i = 0; i < strlen(a); i++){
		if(a[i] == ' ' && a[i + 1] == ' '){
			for(j = i; j < strlen(a); j++){
				a[j] = a[j + 1];
			}
			i--;//reset i ve gia tri vua kiem tra de kiem tra lai co du khoang trang nua hay khong
		}
	}
	
	//loai bo khoang trang cuoi chuoi
	for(i = strlen(a) - 1; i > 0; i--){
		if(a[i] != ' '){
			a[i + 1] = '\0';
			break;
		}
	}
	
}

void upper1stChar( char a[]){//Viet hoa chu cai dau
	a[0] = a[0] - 32;
	int i;
	for(i = 1; i < strlen(a); i++){
		if(a[i] == ' '){
			a[i + 1] = a[i + 1] - 32;
		}
	}
}

void TachTen(char a[]){
	int i;
	for(i = strlen(a) - 1; i > 0; i--){
		if(a[i] == ' '){
			a[i] = '\n';
			break;
		}
	}
}

int main(){
	char hoTen[max];
	fgets(hoTen, max, stdin);
	
	if(hoTen[strlen(hoTen) - 1] == '\n')
		hoTen[strlen(hoTen) - 1] = '\0';
		
	printf("\nChuoi ban dau la: %s", hoTen);
	printf("\nDo dai chuoi ban dau: %d", strlen(hoTen));
	
	Xspace(hoTen);
	printf("\n\nChuoi sau khi loai bo khoang trang la: %s", hoTen);
	printf("\nDo dai chuoi sau khi loai bo khoang trang khong can thiet: %d", strlen(hoTen));
	
	upper1stChar(hoTen);
	printf("\n\nChuoi sau khi viet hoa chu cai dau la: %s", hoTen);
	
	TachTen(hoTen);
	printf("\n\nChuoi sau khi tach ten: %s", hoTen);
	
	return 0;
}
