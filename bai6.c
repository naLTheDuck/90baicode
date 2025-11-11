/*
Cho số thực a và số tự nhiên n. Hãy viết chương trình có sử dụng hàm để tính

a. a(a+1)...(a+n-1)
b.  1/a+1/a(a+1)+...+1/a(a+1)...(a+n)
*/

#include <stdio.h>
#include <math.h>

int caua(float a, int n) {
	int i;
	float s=1;
	for (i=0; i<n; i++) {
		s=s*(a+i);
	}
	printf("%f", s);
	return 0;
}

int caub(float a, int n) {
	int i;
	float mau=a;
	float s=0;
	for (i=0; i<=n; i++) {
		s+=1/(1.0*mau);
		mau*=a+i+1;
	}
	printf("\n%f", s);
	return 0;
}

int main() {
	int n;
	float a;
	scanf("%f %d", &a, &n);
	caua(a, n);
	caub(a, n);
}
