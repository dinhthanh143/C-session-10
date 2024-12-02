#include<stdio.h>

int main(){
		int i,j,temp;
	int arr[]={2,34,7,45,8,9};
	 int size=sizeof(arr)/sizeof(int);
	
	for(i=1;i<size;i++){
		temp = arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp){
		   arr[j+1]=arr[j];
			j--;
			
			
		}
		arr[j+1]=temp;
		
		
		
	}
		for(i=0;i<size;i++){
			printf("%d\t",arr[i]);
		}
	
	
	

   return 0;
}

