/* w.a.p to find a sum of this following series:
1+10+101+1010+...upto n terms*/
#include <stdio.h>
int main()
{
	int n,sum=0, term=0, i=1;
	printf("enter the number of terms:");
	scanf("%d",&n);
	while(i<=n)
	{
	if(i%2!=0){
		term=term*10+1;
		printf("\n%d",term);
	}	
	else{
		term=term*10;
		//sum=sum+term;
		printf("\n%d",term);
	}
	i++;
	sum=sum+term;
	//if(i<n)
}
	printf("\n sum=%d",sum);
	return 0;	
}