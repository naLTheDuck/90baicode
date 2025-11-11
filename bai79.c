/*
Viết chương trình có sử dụng hàm để nhập ma trận A cấp nxn (với n nhập từ 
bàn phím):
a. Xuất ma trận A ra màn hình  
b. Đưa phần tử lớn nhất của từng hàng của ma trận lên đường chéo chính và 
tính tổng các phần tử lớn nhất đó
*/
#include <stdio.h>
#include <math.h>

int matrixgen(int matrixgen[100][100], int a) {
	int i, j;
	for (i=0; i<a; i++) {
		for (j=0; j<a; j++) {
			printf("A[%d][%d]: ", i, j);
			scanf("%d", &matrixgen[i][j]);
		}
	}
	return matrixgen[100][100];
}

int matrixprint(int matrix[100][100], int a) {
	int i, j;
	for (i=0; i<a; i++) {
		for (j=0; j<a; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}

int matrixcalc(int matrix[100][100], int a) {
	int i, j, temp, pos, s, ptemp;
	s=0;
	for (i=0; i<a; i++) {
		for (j=0; j<a; j++) {
			if (temp<matrix[i][j]) {
				temp=matrix[i][j];
				pos=j;
			}
		}
		ptemp = matrix[i][pos];
		matrix[i][pos] = matrix[i][i];
		matrix[i][i] = ptemp;
		s+=temp;
		temp = 0;
	}
	printf("%d", s);
}                       

int main() {
	int n, i, j;
	int matrix[100][100];
	printf("Cap ma tran? ");
	scanf("%d", &n);
	matrixgen(matrix, n);
	matrixprint(matrix, n);
	matrixcalc(matrix, n);
	return 0;
}
