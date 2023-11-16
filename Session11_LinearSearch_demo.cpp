#include <stdio.h>
int main(){
	int numbers[] = {3,6,1,8,5,6};
	int searchValue = 6;
	int size = sizeof(numbers)/sizeof(int);
	int i;
	int cntFindNumber = 0;
	for(i=0;i<size;i++){
		if(numbers[i]==searchValue){
			cntFindNumber++;
			break;
		}
	}
	//in ket qua
	if(cntFindNumber>0){
		printf("Tim thay phan tu co chi so %d trong mang co gia tri %d\n",i,numbers[i]);
	}else{
		printf("Khong tim thay phan tu nao trong mang co gia tri la: %d\n",searchValue);
	}
	
}
