//documentation section 
/* Exercise 1 */

//pre-processor section 
#include<stdio.h>

//global variable section 
void insertionSort(int UA[], int n);
void afterSort(int UA[], int n);

//main function section
int main()
{	
	int UA[] = {5, 1, 4, 2, 8};
	int size = 5;
	
    insertionSort(UA, size);
    afterSort(UA, size);
    
    return 0;
}


//user-defined section
void insertionSort(int UA[], int n)
{
	int item;
	int pass, insertIndex;
	
	for(pass = 1; pass < n; ++pass)
	{
		item = UA[pass];
		insertIndex = pass;
		
		while((insertIndex > 0) && (UA[insertIndex - 1] > item))
		{
			UA[insertIndex] = UA[insertIndex - 1];
			insertIndex--;
		}
		UA[insertIndex] = item;
	}
}

void afterSort(int UA[], int n)
{
	printf("Sorted Element using Insertion Sort Technique is ");
	
	for(int i = 0; i < n; ++i)
	{
		printf("%d,", UA[i]);
	}
}
