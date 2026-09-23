#include<stdio.h>
int main()
{
	int i,n;
	float x[100],s=0,AM;
	printf("Enter the number of observations");
	scanf("%d",&n);
	printf("Enter the observations");
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
		s+=x[i];
	}
	AM=s/n;
	printf("The Arithmetic Mean is : %.2f\n",AM);
	return 0;
}