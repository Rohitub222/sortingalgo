//Header file for insertion_sort.c

typedef struct Record {
	long int serialnumber;
	int score;
} Record;

//Bubble Sort
//Sorts the array of Records on the serialnumber field using the Bubble Sort algorithm.
//Sorts the array A in-place and returns the comparison count.
long int BubbleSort(Record* A, int n);

