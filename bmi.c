#include<stdio.h>

int main(){
	int weight;
	float height;
	float bmi;
	printf("Lutfen boyunuzu giriniz(Orn:1.75):");
	art:
	scanf("%f",&height);
	if(height>2.50){
		printf("Lutfen gecerli bir boy giriniz(Orn:1.75):");
		goto art;
	}
	printf("Lutfen kilonuzu giriniz:"),
	scanf("%d",&weight);
	
	bmi=(weight)/(height*height);
	
	if(bmi<20.00){
		printf("Vucud kitle endeksiniz: %f2 dir. Normalden daha zayıfsınız.",bmi);
	}
	else if(20.00<=bmi && bmi<25.00){
		printf("Vucud kitle endeksiniz %f2 dir. Ideal kikoya sahipsiniz",bmi);
	}
	else{
		printf("Vucud kitle endeksiniz %f2 dir. Normalden daha kilolusunuz.",bmi);
	}
	
	return 0;
}