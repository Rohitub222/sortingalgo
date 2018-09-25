#include <stdio.h>
#include <stdlib.h>
#include <time.h> //link with -lrt
#include"bsort.h"
//returns the duration from start to end times in sec
double time_elapsed(struct timespec *start, struct timespec *end);

int main(int argc, char const *argv[]) {
	int n; //size of the array
	long int resi; //location of key in arr
	Record *a;
	struct timespec start;
	struct timespec end;
	int i;

	scanf("%d", &n);
	a = (Record *) malloc(n * sizeof(Record));
	for (i = 0; i < n; ++i) {
		scanf("%ld %d", &(a[i].serialnumber),&(a[i].score));
	}	

	clock_gettime(CLOCK_REALTIME, &start); //start timestamp
	resi = BubbleSort(a,n); 
	clock_gettime(CLOCK_REALTIME, &end); //end timestamp

	printf("%ld\t", resi);
	printf("%lf sec\n", time_elapsed(&start, &end));
	free(a);
	return 0;
}

//returns the duration from start to end times in sec
double time_elapsed(struct timespec *start, struct timespec *end) {
	double t;
	t = (end->tv_sec - start->tv_sec); // diff in seconds
	t += (end->tv_nsec - start->tv_nsec) * 0.000000001; //diff in nanoseconds
	return t;
}

	
