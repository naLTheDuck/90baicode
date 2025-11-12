/*
Cho số thực a và số tự nhiên n. Hãy viết chương trình có sử dụng hàm để tính:

a. a^n
b. a(a+1)...(a+n-1)
c. 1/a+1/a(a+1)+...+1/a(a+1)...(a+n)
*/

#include <stdio.h>
#include <math.h>

double caua(double a, int n) {
	if (n==0) return 1;
	double s = caua(a, n/2);
	if (n % 2 == 0) {
		return s*s;
	} else {
		return a*s*s;
	}
}

double caub(double a, int n) {
	int i;
	double s=1;
	for (i=0; i<n; i++) {
		s=s*(a+i);
	}
	return s;
}

double cauc(float a, int n) {
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
	double a; int n;
	int t; 
	scanf("%lf %d", &a, &n);
	double dapana = caua(a, n);
	double dapanb = caub(a, n);
	double dapanc = caub(a, n);
	printf("%lf\n", dapana);
	printf("%lf\n", dapanb);
	printf("%lf", dapanc);
	return 0;
}

/*
    __
___( o)> Quack!
\ <_. )  
 `---'   From naLTheDuck
*/
