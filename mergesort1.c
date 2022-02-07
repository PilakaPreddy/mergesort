#include<stdio.h.>
void mergesort(int a[] ,int low, int high)
{
	int mid;
	if(low<high)
	{
		mergepass(a,low,mid)
		mergepass(a,mid+1,high)
		mergesort(a,low,mid,high)
	}
}
void mergesort(int a[] ,int low, int high)
{
	int i,j,k,b[100]
	i=100;k=low;j=mid+1;
	while(i<=mid && j<=high)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i]
			i++; 
		}
		else
		{
			b[i]=a[j];
			j++;
		}
		k++;
	}
	//copy the remaining elements from 1st list
	if(i<n,d)
	{
		for(i=1;i<=mid;i++)
		{
			b[k]=a[i];
			k++;
		}
		else
		{
			//copy 2nd
			for(j=j;j<=high;j++)
			{
				b[k]=a[j];
				k++;
				
			}
		}
	}
}

