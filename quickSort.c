#include<stdio.h>

int number = 10;

int data[10] = {3, 7, 8, 1, 5 ,9 , 6, 10, 2, 4};

void quickSort(int *data, int start, int end){

	if(start >= end) {
 		return;
	}

        int key = start;
        int i = start + 1;
        int j = end;
        int temp;

        while(i <= j) {

        	while(data[i] <= data[key]){
				i++;
		    }

            while(data[j] >= data[key] && start < j){
                j--;
            }


            if(i>j){
  
				temp = data[key];
				data[key] = data[j];
				data[j] = temp;

            } else {

                temp = data[i];
                data[i] = data[j];
            	data[j] = temp;
                     
            }
        }
        
        quickSort(data, start, j-1);
        quickSort(data, j+1, end);
    
}		

int main(void){

        quickSort(data, 0, number-1);

        for(int i=0; i<10; i++){

			printf("%d",data[i]);

        }

        return 0;
}

