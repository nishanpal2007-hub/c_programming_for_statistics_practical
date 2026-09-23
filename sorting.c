#include<stdio.h>
int main()
{
	int i,j,n;
	float x[20],temp;
	printf("Enter the number of observations");
	scanf("%d",&n);
	printf("Enter the value of x:\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(x[i]>x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
				
			}
		}
	}
	printf("The sorted values are: ");
	for(i=0;i<n;i++)
	{
		printf("%f\n",x[i]);
	}
	return 0;
}