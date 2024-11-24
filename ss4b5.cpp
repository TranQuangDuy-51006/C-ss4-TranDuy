#include<stdio.h>

int main(){
	int n, n1, n2;
	printf("nhap so thu nhat: "); 
	scanf("%d", &n);
	printf("nhap so thu hai: "); 
	scanf("%d", &n1);
	printf("nhap so thu ba: "); 
	scanf("%d", &n2);
	if(n2 > n && n2 < n1){
		printf(" so %d nam trong khoang giua so %d va so %d", n2, n, n1); 
	}else if(n2 < n && n2 > n1){
		printf(" so %d nam trong khoang giua so %d va so %d", n2, n, n1); 
	}else{
		printf(" so %d khong nam trong khoang giua so %d va so %d", n2, n, n1); 	
	}
	return 0; 
} 
