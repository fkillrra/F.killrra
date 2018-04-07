#include <stdio.h>
#include <math.h>

int func(int x1, int y1, int r1, int x2, int y2, int r2);
int main(void)
{
	int input;
	int i;
	int x1,y1,r1,x2,y2,r2;
	
	scanf("%d",&input);
	int result[input];
	for(i = 0; i < input; i++)
	{
		scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
		result[i]  = func(x1,y1,r1,x2,y2,r2);
	}
	for(i = 0; i < input; i++)
	{
		printf("%d\n",result[i]);
	}
	
	return 0;
}
int func(int x1, int y1, int r1, int x2, int y2, int r2)
{
	int result = 0;
	double c;
	
	c = sqrt((pow(x1-x2,2.0)) + (pow(y1-y2,2.0)));
	
	if(x1 == x2 && y1 == y2)
	{
		if(r1 == r2)
			result = -1;
		else
			result = 0;
	}
	else
	{		
		if((c < (r1+r2)) && c > abs(r1-r2))
			result = 2;
		
		else if(c == (r1+r2) || c == abs(r1-r2))
			result = 1;
		
		else
			result = 0;
	}
		
	return result;
}
