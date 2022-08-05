#include <stdio.h>
int main(){
	int n;
	printf("Nhap so so nguyen can tao mang n =");
	scanf("%d",&n);

	int ar[n];
	printf("Nhap %d so nguyen:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&ar[i]);
		for(int j=0;j<i;j++){
			if(ar[j]==ar[i]){
				printf("So nguyen %d da co trong mang, moi ban nhap so nguyen khac\n",ar[i]);
				scanf("%d",&ar[i]);
			}
		}
	}
}
