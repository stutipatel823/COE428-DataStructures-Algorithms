#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

extern int pop();
extern void push(int);
extern void isEmpty();
extern void addHeap(int);
extern void sortHeap(int);
extern int deleteHeap();
extern int printHeap(int);

int main(int argc, char * argv[])
{
	/** value is the inputs entered by the user.
	 * count represents the max number of inputs by the user.
	 * index represents the index number when itterating through an array.*/
	int count, value, index=0;

	while (scanf("%d\n", &value) != EOF) {
		fprintf(stderr, "READING INPUT: %d\n", value);
		addHeap(value);
		count++;
	}

	printHeap(0);//Prints the Heap Tree.
	
	/** deleteHeap() also sorts the array. 
	 * "maxNum" represents the maximum number which gets pushed into the stack but gets deleted from the heap array.
	 * Stack has the largest number on the bottom and lowest on the top*/
	for (index = 0; index < count; index++)
	{
		int maxNum = deleteHeap();
		printf("%d\n", maxNum);
		push(maxNum);
    }
	
	printf("\n");
	
	/** This for loop pushes out each value from the stack.
	 * Since the lowest is on the top the lowest gets printed first.
	 * At the end, the output should have lowest to highest printed.
	 * Count variable is the size of the stack. Also the total number of inputs by the user.*/
	for (index = 0; index < count; index++)
	{
		printf("%d\n", pop());
	}

	exit(0);
}

