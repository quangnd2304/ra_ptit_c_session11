#include <stdio.h>
int main(){
	//Selection Sort - Giam dan
	int numbers[] = {5,2,7,1,9};
	int size = sizeof(numbers)/sizeof(int);
	//Duyet cac phan tu trong mang de sap xep
	for(int i=0;i<size-1;i++){
		//Duyet cac phan tu phia sau phan tu sap xep
		for(int j=i+1;j<size;j++){
			//So sanh gia tri phan tu truoc va phan tu sau--> doi cho
			if(numbers[i]<numbers[j]){
				//Doi cho 2 phan tu
				int temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}
	//In mang sau khi sap xep
	printf("Mang sau khi sap xep giam dan:\n");
	for(int i=0; i<size; i++){
		printf("%d\t",numbers[i]);
	}	
}
