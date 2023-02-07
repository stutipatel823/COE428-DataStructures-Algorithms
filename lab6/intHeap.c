#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

int size = 0;
int heap[1000];

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
void addHeap(int thing2add)
{
	int temp;
	int location = size;
	int parentNode;

	parentNode = (location-1)/2;
	heap[size] = thing2add;

	while ((heap[parentNode] < thing2add) && (parentNode >= 0))
	{
		temp = heap[parentNode];
		heap[parentNode] = heap[location];
		heap[location] = temp;
		location = parentNode;
		parentNode = (location-1)/2;
	}
	size++;
}
/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()
{
  return size;
}

/**
 *  sortHeap(int location) sorts the heap starting from "location".
 *
 */
void sortHeap(int location)
{
	int temp;
	int left = (2*location) + 1;
	int right = (2*location) + 2;
	int max = location;

	
	
	if((right < size) && (heap[right] > heap[max])){
		max = right;
	}
	
	if((left < size) && (heap[left] > heap[max])){
		max = left;
	}
	
	if(max != location) {
		temp = heap[max];
		heap[max] = heap[location];
		heap[location] = temp;
		sortHeap(max);
	}
}

/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */
int deleteHeap(){
	int max = heap[0];
	size--;
	heap[0] = heap[size];
	heap[size] = max;
	sortHeap(0);
	return max;
}
/**
 * printHeap() prints every "node"(child and parent) of the Heap  Tree.
 *
 */
//#include <stdio.h>
//#include <string.h>
//char c[]="";
//char s = ' ';
void printHeap(int index){
	int left = (2*index) + 1;
	int right = (2*index) + 2;


	printf("<nodeId = '%d'>\n", heap[index]);
	if(left<size){
	  //printf("%s",c);
	  printHeap(left);
	  //strncat(c,&s,1);
	}

	if(right<size){
	  //printf("%s",c);
	  printHeap(right);
	  //strncat(c,&s,1);
	}

	printf("</node>\n");
}
