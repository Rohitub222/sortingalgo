//implementation file for insertion sort which returns the number of comparisons as well

#include<stdio.h>
#include"isort.h"

long int InsertionSort(Record* A, int n)
{
	int i,j;
	long int cnt=0;
	for(i=1;i<n;i++)
	{
		long int t1=A[i].serialnumber;
		int t1_s=A[i].score;
		for(j=i-1;j>=0;j--)
		{
			if(t1 < A[j].serialnumber)
			{
				A[j+1].serialnumber=A[j].serialnumber;
				A[j+1].score=A[j].score;
				A[j].serialnumber=t1;
				A[j].score=t1_s;
				cnt++;
				
				
			}
			if(t1>A[j].serialnumber)
			{
				cnt++;
				break;
			}	
		}
	}
	
	return cnt;
}
