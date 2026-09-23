#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	float x[100],p=1,GM;
	printf("Enter the number of observations");
	scanf("%d",&n);
	printf("Enter the observations except 0");
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
		p*=x[i];
	}
	GM=pow(p,1.0/n);
	printf("The Geometric mean is :%.2f\n",GM);
	return 0;
}