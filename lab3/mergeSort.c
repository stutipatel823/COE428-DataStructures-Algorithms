#include "mySort.h"
void merge(int a[], int l, int m, int r)
{
	
	int temp[MAX_SIZE_N_TO_SORT];
	int i, j, k;
	i = l;
	j = m+1;
	k = l;
	
	while(i<= m && j<=r){//i<= m && j<=r
		if(myCompare(a[i],a[j])<0){//a[i]<=a[j]
			myCopy(&a[i],&temp[k]);//temp[k] = a[i];
			i++;
		}
		else if(myCompare(a[j],a[i])<0){//a[j]<=a[i]
			myCopy(&a[j],&temp[k]);//temp[k] = a[j];
			j++;
		}
		k++;
	}
	
	/*Copying Remaining Elements*/
	while(i<=m){myCopy(&a[i],&temp[k]);i++;k++;}//temp[k]=a[i];
	while(j<=r){myCopy(&a[j],&temp[k]);j++;k++;}//temp[k]=a[j];
		
	/*Copying Values Back To an Array*/
	for(k = l; k<=r; k++){a[k]=temp[k];}	
}
  
void mySort(int array[], unsigned int first, unsigned int last)
{
    if (first < last) {
        int m = first + (last - first)/2;
  
        mySort(array, first, m);
        mySort(array, m + 1, last);
  
        merge(array, first, m, last);
    }
}
