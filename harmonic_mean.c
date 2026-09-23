#include<stdio.h>
int main()
{
	int i,n;
	float x[100],r,s=0,HM;
	printf("Enter the number of observations");
	scanf("%d",&n);
	printf("Enter the observations");
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
		r=1.0/x[i];
		s+=r;
	}
	HM=n/s;
	printf("The Harmonic mean is :%.2f\n",HM);
	return 0;
}