#include<stdio.h>
int main()
{
        int a[20],i,j,n,temp=0,k,key,last,mid,first;
        printf("Enter n:");
        scanf("%d",&n);
        printf("Enter %d number of elements\n",n);
        for(i=0;i<n;i++)
        {
        	scanf("%d",&a[i]);
        }
        printf("unsorted list\n");
        for(i=0;i<n;i++) 
        {
        	printf("%d\n",a[i]);
        }
        for(i=0;i<n-1;i++)
        {
        	for(j=0;j<n-i-1;j++)
        	{
        		if(a[j]>a[j+1])
        		{
          			temp=a[j];
          			a[j]=a[j+1];
          			a[j+1]=temp;
        		}
		}
	}
        printf("sorted list\n");
        for(k=0;k<n;k++)
        {
        	printf("%d\n",a[k]);
        }
	first=0;
	last=n-1;
	printf("Enter key:");
	scanf("%d",&key);	
	while(first<=last)
	{
		mid=(first+last)/2;
		if(key==a[mid])
		{
			printf("%d is found at %d",key,mid+1);
			return 1;
		}
		else if (key<a[mid])
			{
				last=mid-1;
			}
		else 
			{
				first=mid+1;
			}
	}
	printf("%d is not found\n",key);
	return 0;
}          
