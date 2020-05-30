/*
Y tuong:
- Sap xep mang theo chieu tang dan
- Dung vong lap duyet qua va dem so lan xuat hien cua tung phan tu
- In so lan xuat hien cua moi gia tri ra man hinh
*/

#include <stdio.h>

#define N 10

void input(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void output(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}

void swap(int *x, int *y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void selectionSort(int a[], int n){
	int i, j;
	for(i = 0; i < n - 1; i++){
		int min = i;
		for(j = i + 1; j < n ; j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		swap(&a[i], &a[min]);
	}
}

int Search(int a[], int x){
	int count = 0;
	int i;
	for(i = 0; i < N; i++){
		if(x == a[i])
			count++;
		else if(x < a[i])
			break;
	}
	return count;
}


int main(){
	int a[20];
	input(a, N);
	printf("Mang a[] ban dau la:\n");
	output(a, N);
	
	printf("Mang a[] sau khi sap xep theo thu tu tang dan la:\n");
	selectionSort(a, N);
	output(a, N);
	
	int i;
	for(i = 0; i < N; i++){
		if(Search(a, a[i]) == 1){
			printf("So lan xuat hien cua gia tri %d trong mang a[] la %d\n", a[i], Search(a, a[i]));
		}else{
			printf("So lan xuat hien cua gia tri %d trong mang a[] la %d\n", a[i], Search(a, a[i]));
			i = i + Search(a, a[i]) - 1; 
		}
	}

	return 0;
}
