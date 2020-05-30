#include<stdio.h>
#include<Math.h>

int main(){
	int n, i;
	printf("Enter the number \n");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		double phi = (1 + sprt(5)) / 2;
		double result =  ((pow(phi,i)/sqrt(5)) + 0.5);
		printf("%ld", &result);
	}
	return 0;
}


