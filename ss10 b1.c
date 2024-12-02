#include<stdio.h>

int main(){
	
	int number,i;
	int flag=-1;
	int arr[]={2,6,3,8,34,1,12};
	printf("moi nhap so can kiem tra: ");
	scanf("%d", &number);
  for( i=0;i<sizeof(arr)/sizeof(int);i++){
    	if (arr[i]==number){
    		flag=i;
		}
    	
	}
	if(flag!=-1){
		printf("phan tu nam o vi tri %d",flag);
	}else{
		printf("phan tu khong co trong mang");
	}
  
  
  
   return 0;
}

