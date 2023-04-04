#include<stdio.h>
void main()
{
	int a[20],i,j,temp=0,n;
	printf("Enter the size of an array :");
	scanf("%d",&n);
	printf("Enter the array elements :\n");
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] element :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("Smallest element in an array : %d\n",a[0]);
	printf("Largest element in an array : %d",a[n-1]);
}
