#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define HASH_TABLE_SIZE 10000000
typedef struct Entry Entry, *EntryPtr;
struct Entry {
  char * string;
  int count;
};
Entry hash_table[HASH_TABLE_SIZE];

void add(char* tag)
{
	for(int i=0; i<HASH_TABLE_SIZE;i++){
		if(hash_table[i].string==tag){
			hash_table[i].count++;
		}
		else{
			int n=2;
			int key=1;
			for(int i=0; i<strlen(tag);i++){
				key = n*key+tag[i];
			}
			hash_table[key].string = tag;
			hash_table[key].count++;
			
			printf("%s\t %d\t%d \n",hash_table[key].string, key, hash_table[key].count);
			break;
		}
	}
}
int  main(void){
	char* c1 = "h";
	char* c2 = "i";
	char* c3 = "hi";
	char* c4 = "ih";
	printf("String\t Key\tCount \n");
	add(c1);
	add(c2);
	add(c3);
	add(c4);
	add(c4);
	
	/*char s = 's';
	int a = (int)s;
	printf("%c: %d",s,a);
	char word[] = "";
	//char letter = 's';
	strncat(word,c3,2);
	//char* nice = word;
	//printf("Appended to: %s\n",nice);
	printf("Appended to: %s\n",word);*/
}
