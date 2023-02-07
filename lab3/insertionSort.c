 #include "mySort.h"

void mySort(int array[], unsigned int first, unsigned int last)
    {
  int index,compare,j;
	for(index = first; index <= last; index++){
		myCopy(&array[index],&compare); //compare = array[index];
		 j = index-1;
		while(j >= 0 && myCompare(array[j],compare)>0){//array[j] > compare
				mySwap(&array[j+1],&array[j]);//array[j +1] = array[j];
				j--;
		 }
		
	}
}

