void mySort(int d[], unsigned int n)
{
  int index,compare,j;
    for( index = 1; index < n; index++){
		 compare = d[index];
		 j=index-1;
		while(j >= 0 && d[j] > compare){
				d[j +1] = d[j];
				j--;
		 }
		d[j + 1] = compare;
    }	
}
