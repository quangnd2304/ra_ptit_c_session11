#include <stdio.h>
int main(){
	//Insertion sort - sap xep giam dan
	int numbers[] = {3,7,4,6,2};
	int size = sizeof(numbers)/sizeof(int);
	//Duyet tung phan tu cua mang chua duoc sap xep
	for(int i=1;i<size;i++){
		//Luu gia tri phan tu can sap xep ra bien trung gian
		int key = numbers[i];
		//Duyet tung phan tu cua mang da duoc sap xep (cuoi len dau)
		int j = i - 1;
		while(j>=0 && key>numbers[j]){
			//Day phan tu j ra vi tri phia sau
			numbers[j+1] = numbers[j];
			j-=1;
		}
		numbers[j+1] = key;
	}
	//In ra mang sau khi sap xep
	printf("Mang sau khi sap xep:\n");
	for(int i=0;i<size;i++){
		printf("%d\t",numbers[i]);
	}
}
