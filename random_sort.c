#include<stdio.h>
#include<time.h>

// A computer program generates 10 random numbers and stores them in an array. 
//The values are sorted largest to smallest, i.e. the largest value is the first element in the array. 
//The values are displayed after sorting.

int main(){
	
	time_t t;
	int i,j;
	int array[10];
	
	srand((unsigned) time(&t));
	
	for(i=0;i<10;i++){
		array[i]=(rand() %60);
	}
	
	int k,l,temp;
	
	for(k=1;k<10;k++){
		
		for(l=0;l<9;l++){
			
			if(array[k]>array[l]){
				
				temp=array[l];
				array[l]=array[k];
				array[k]=temp;
				
				
			}
			
			
		}
	}
	
	int m;
	for(m=0;m<10;m++){
		printf("%d ",array[m]);
	}
	
	
	return 0;
}
