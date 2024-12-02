#include<stdio.h>

int main(){
	int i,j,temp,num;
	int arr[]={2,34,7,45,8,9,4,4,6,14,15,20,2};
	 int size=sizeof(arr)/sizeof(int);
	 int flag=-1;
	 printf("moi nhap gia tri muon kiem tra:");
	 scanf("%d", &num);
	 
	 for(i=0;i<size;i++){
	 	if (arr[i]==num){
	 		printf("gia tri %d nam o vi tri %d\n",num,i);
	 		flag++;
	 		
		 }
	 	 	
	 }
	 if (flag==-1){
	 	printf("gia tri da nhap khong co trong mang");
	 }
	 
	 
	 
	 
	 

   return 0;
}

