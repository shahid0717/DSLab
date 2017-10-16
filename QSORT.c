#include<stdio.h>

void quick_sort(int a[],int lower,int upper)
{
	int i;
	if(lower<upper)
	{
		i=split(a,lower,upper);
		quick_sort(a,lower,i-1);
		quick_sort(a,i+1,upper);
	}
}

int split(int arr[],int lower,int upper)
{
	int pivot = lower,a=lower+1,b=upper,temp;
	
	while(a<=b)
	{
		while(arr[a]<arr[pivot])
			a++;
			
		while(arr[b]>arr[pivot])
			b--;
		if(a<b)
		{
			temp=arr[a];
			arr[a]=arr[b];
			arr[b]=temp;
		}
	}
	
	temp=arr[pivot];
	arr[pivot]=arr[b];
	arr[b]=temp;

return b;
}

void main()
{
	int a[20],i,n;
	printf("ENETR THE NUMBER OF ELEMENTS");
	scanf("%d",&n);
	printf("enter the array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	quick_sort(a,0,n);
    for(i=0;i<n;i++)
     printf("%d",a[i]);
}
