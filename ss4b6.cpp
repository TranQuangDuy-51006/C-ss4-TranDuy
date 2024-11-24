#include<stdio.h>

int main(){
	float kWh, kWhDauThang, kWhCuoiThang, tienDien;
	printf("nhap so dien dau thang: ");
	scanf("%f", &kWhDauThang); 
	printf("nhap so dien cuoi thang: ");
	scanf("%f", &kWhCuoiThang);
	kWh = kWhCuoiThang - kWhDauThang;
	if(kWh >= 0 && kWh < 50){
		tienDien = kWh * 10000; 
	}else if(kWh >= 50 && kWh < 100){
		tienDien = kWh * 15000; 
	}else if(kWh >= 100 && kWh < 150){
		tienDien = kWh * 20000; 
	}else if(kWh >= 150 && kWh < 200){
		tienDien = kWh * 25000; 
	}else if(kWh >= 200 ){
		tienDien = kWh * 30000; 
	}else{
		printf("co loi xay ra!");
		return 1; 
	}
	printf("%f tien dien thang nay cua ban la: ", tienDien);
	return 0; 
} 
