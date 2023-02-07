EVERYTHING WORKED!
My code for both requirements compie and show the correct output. For the first requirement, I used the professor's method/code for insersion sort. This was found in his second powerpoint where he explained how the inserstion sort works. For the second requirement, I did some research on argc and argv as I didn't know what those two were. This is the link to the video that helped me understand the concept (https://www.youtube.com/watch?v=aP1ijjeZc24).

To answer the question, in order to make sorting function better, I would set the 0th index of the data array equal to "first" and the last index of the array to equal to "last". I would also start the for loop with 2 instead of 1. Here is a sample code...

void betterSort(int data[], first, last)
{
  int index;
  int compare;
  int j;
	data[0] = first;
	data[sizeof(data)-1]=last;
    
    for( index = 2; index < sizeof(data); index++){
		 compare = d[index];
		 j=index-1;
		while(j >= 1 && d[j] > compare){
				d[j +1] = d[j];
				j--;
		 }
		d[j + 1] = compare;
    }	
}
