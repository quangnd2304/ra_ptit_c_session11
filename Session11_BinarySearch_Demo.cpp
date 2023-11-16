#include <stdio.h>
int main(){
	int numbers[] = {9,7,5,3,1};
	int searchValue = 7;
	//Khoi tao chi so bat dau va chi so ket thuc
	int start = 0;
	int end = sizeof(numbers)/sizeof(int)-1;
	//Khai bao chi so giua (trung binh)
	int mid;
	//end<start: khong tim thay phan tu trong mang
	while(start<=end){
		//Tinh chi so giua
		mid = (start+end)/2;
		if(numbers[mid]==searchValue){
			break;
		}else if(numbers[mid]<searchValue){
			end = mid-1;
		}else{
			start = mid+1;
		}
	}
	//in ket qua
	if(numbers[mid]==searchValue){
		printf("Tim thay phan tu co chi so %d trong mang co gia tri %d\n",mid,numbers[mid]);
	}else{
		printf("Khong tim thay phan tu co gia tri %d trong mang\n",searchValue);
	}
	
}
