#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int absolute_compare(int a, int b)
{
	if(abs(a) > abs(b)) return 1;
	else
		return -1;
}
int compare(int a, int b)
{
	if(a > b)
		return 1;
	else 
		return -1;
}

void sort(int A[], int n, int (*compare)(int, int))
{
	int i,j,temp;
	for (i = 0; i<n; i++)
		for(j=0; j<n-1; j++){
			if(compare(A[j], A[j+1]) > 0)
			{
			temp = A[j];
			A[j] = A[j+1];
			A[j+1] = temp;
			}
}}
int main()
{
	int i;
	int A[] = {3,2,1,-4,8,7,45,-64};
	sort(A,8, absolute_compare);
	for(i = 0;i<8;i++) printf("%d ""\n",A[i]);
}
