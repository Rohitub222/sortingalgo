//implementation file for bubblesort sort which returns the number of comparisons as well

#include<stdio.h>
#include"bsort.h"

long int BubbleSort(Record* A, int n)
{
	long int cnt=0;
	int i=0,j;
	while(i<n-1)
	{
		int noswaps=1;
		for(j=0;j<=(n-2-i);j++)
		{
			if(A[j].serialnumber>A[j+1].serialnumber)
			{
				long int t1_sn=A[j].serialnumber;
				int t1_sc=A[j].score;
				A[j].serialnumber=A[j+1].serialnumber;
				A[j].score=A[j+1].score;
				A[j+1].serialnumber=t1_sn;
				A[j+1].score=t1_sc;
				
				noswaps=0;
			}
			cnt++;
		}
		if(noswaps)
		{	

			break;
		}
		
		i++;
		
	}	
	return cnt;
}

