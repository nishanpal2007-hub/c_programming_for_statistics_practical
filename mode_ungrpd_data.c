#include<stdio.h>
int main()
{
	int i,j,n;
	float x[100];
	printf("Enter the number of observations");
	scanf("%d",&n);
	printf("Enter the values of x\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
	}
	float mode=x[0];
	int max_count=0;
	for(i=0;i<n;i++)
	{
		int count=0;
		for(j=0;j<n;j++)
		{
			if(x[i]==x[j])
			{
				count++;
			}
		}
		if(count>max_count)
		{
			max_count=count;
			mode=x[i];
		}
	}
		printf("The Mode is:%.2f and the frequency is:%d\n",mode,max_count);
	return 0;
}