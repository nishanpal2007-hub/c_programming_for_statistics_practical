#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n;
	float x[100],s=0,mean,median,temp,sum_dev_mean=0,sum_dev_median=0,md_mean,md_median;
	printf("Enter the number of observations:");
	scanf("%d",&n);
	printf("Enter the values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
		s+=x[i];
	}
	mean=s/n;
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
	if(n%2!=0)
	{
		median=x[n/2];
	}
	else
	{
		median=(x[(n/2)-1]+x[n/2])/2.0;
	}
	for(i=0;i<n;i++)
	{
		sum_dev_mean+=fabs(x[i]-mean);
		sum_dev_median+=fabs(x[i]-median);
	}
	md_mean=sum_dev_mean/n;
	md_median=sum_dev_median/n;
	printf("The Mean is :%.2f\n",mean);
	printf("The Median is :%.2f\n",median);
	printf("The Mean deviation about mean is :%.2f\n",md_mean);
	printf("The Mean deviation about median is :%.2f\n",md_median);
	return 0;
}