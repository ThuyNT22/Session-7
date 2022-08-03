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

	int max=ar[0];
	for(int i=1;i<n;i++){
		if(ar[i]>max){
			max=ar[i];
		}
	}

	int min=ar[0];
	for(int i=1;i<n;i++){
		if(ar[i]<min){
			min=ar[i];
		}
	}
	printf("Doan [%d; %d] chua toan bo gia tri cua mang",min,max);
}