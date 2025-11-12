/*
Cho số thực a và số tự nhiên n. Hãy viết chương trình có sử dụng hàm để tính

a. a(a+1)...(a+n-1)
b. 1/a+1/a(a+1)+...+1/a(a+1)...(a+n)
*/

#include <stdio.h>
#include <math.h>

double caua(double a, int n) {
	int i;
	double s=1;
	for (i=0; i<n; i++) {
		s=s*(a+i);
	}
	return s;
}

double caub(float a, int n) {
	int i;
	double mau=a;
	double s=0;
	for (i=0; i<=n; i++) {
		s+=1.0/mau;
		mau*=(a+i+1);
	}
	return s;
}

int main() {
	int n;
	double a;
	scanf("%lf %d", &a, &n);
	double dapana = caua(a, n);
	double dapanb = caub(a, n);
	printf("%lf\n", dapana);
	printf("%lf", dapanb);
}

/*
    __
___( o)> Quack!
\ <_. )  
 `---'   From naLTheDuck
*/
