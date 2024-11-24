#include<stdio.h>

int main(){
	int n;
	printf("nhap so: "); 
	scanf("%d", &n);
	if(n < 0){
		printf("%d la so am", n); 
	} else if(n > 0){
		printf("%d la so duong", n); 
	} else{
		printf("%d = 0 ",n); 
	} 
	return 0; 
} 
