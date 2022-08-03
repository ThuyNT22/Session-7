#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("Nhap so so nguyen can tao mang n =");
	scanf("%d",&n);

	int ar[n];
	printf("Nhap %d so nguyen:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	int x;
	printf("Nhap so nguyen x =");
	scanf("%d",&x);
	
	int max=0;
	int kc;
	int z;
	for(int i=0;i<n;i++){
		kc = abs(x - ar[i]);
		if(kc>max){
			max=kc;
			z=ar[i];
		}else{
			max=0;
		}
	}
	printf("Gia tri trong mang so xa gia tri %d nhat la: %d",x,z);
}
