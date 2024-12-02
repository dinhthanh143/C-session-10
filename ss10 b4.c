#include<stdio.h>

int main(){
		int i,j,min;
	int arr[]={2,34,7,45,8,9};
	 int size=sizeof(arr)/sizeof(int);
	 
	 for(i=0;i<size;i++){
	 	min = arr[i];
	 	for(j=i+1;j<size;j++){
	 		if(arr[j]<min){
	 			min=arr[j];
	 			arr[j]=arr[i];
	 			arr[i]=min;
	 			
	 			
			 }
		 }
	 }
	 for(i=0;i<size;i++){
	 	printf("%d\t",arr[i]);
	 }
	 
	
	
	
	
	

   return 0;
}

