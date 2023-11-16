#include <stdio.h>
int main(){
	//Bubble sort - Sap xep giam dan
	int numbers[] = {3,7,2,4,6};
	int size = sizeof(numbers)/sizeof(int);
	//Duyet va sap xep tung phan tu
	for(int i=0;i<size;i++){
		//Sap xep tung phan tu --> so sanh 2 phan tu lien ke nhau
		for(int j=0;j<size-1-i;j++){
			if(numbers[j]<numbers[j+1]){
				//Doi cho
				int temp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = temp;
			}
		}
	}
	//In mang sau khi sap xep
	printf("Mang sau khi sap xep la:\n");
	for(int i=0;i<size;i++){
		printf("%d\t",numbers[i]);
	}	
}
