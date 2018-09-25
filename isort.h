//Header file for insertion_sort.c

typedef struct Record {
	long int serialnumber;
	int score;
} Record;

//Insertion Sort
//Sorts the array of Records on the serialnumber field using the Insertion Sort algorithm.
//Sorts the array A in-place and returns the comparison count.
long int InsertionSort(Record* A, int n);

