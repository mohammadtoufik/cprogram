#include<stdio.h>
int main()
{
	int A[10][10],B[10][10],C[10][10],p,q,m,n,i,j,k;
	printf("Enter the order of matrix A(p*q)");
	scanf("%d%d",&p,&q);
	printf("Enter the order of matrix B(m*n)");
	scanf("%d%d",&m,&n);
	if(q!=m)
       	{ 
		printf("matrix multiplication not possible");
		return 1;
       	}
	printf("Enter matrix A");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
	  	{
			scanf("%d",&A[i][j]);
	  	}
	} 
	printf("Enter matrix B");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
	  	{
			scanf("%d",&B[i][j]);
	  	}
	}
	printf("matrix A:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
	  	{
			printf("\t\n%d",A[i][j]);
		} 
		printf("\n");
	}
	for(i=0;i<p;i++)
	{
		for(j=0;j<n;j++)
	  	{
			C[i][j]=0;
			for(k=0;k<n;k++)
			{
				C[i][j]+=A[i][k]*B[k][j];
			} 
		}
	}
	printf("resultant matrix\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%d\t",C[i][j]);
			}
			printf("\n");
		}
		return 0;
	}

     
