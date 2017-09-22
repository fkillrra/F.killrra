// 9/16 baekjoon 5622번 다이얼 

#include <stdio.h>

int main(void)
{
/*	char arr[15];
	int i, cnt = 0;
	
	scanf("%s",arr);
	for(i = 0; i <= 15; i++)
	{
		if(arr[i] == 'a' || arr[i] == 'b' || arr[i] == 'c')
			cnt = cnt + 3;
		else if(arr[i] == 'd' || arr[i] == 'e' || arr[i] == 'f')
			cnt = cnt + 4;
		else if(arr[i] == 'g' || arr[i] == 'h' || arr[i] == 'i')
			cnt = cnt + 5;
		else if(arr[i] == 'j' || arr[i] == 'k' || arr[i] == 'l')
			cnt = cnt + 6;
		else if(arr[i] == 'm' || arr[i] == 'n' || arr[i] == 'o')
			cnt = cnt + 7;
		else if(arr[i] == 'p' || arr[i] == 'q' || arr[i] == 'r' || arr[i] == 's')
			cnt = cnt + 8;
		else if(arr[i] == 't' || arr[i] == 'u' || arr[i] == 'v')
			cnt = cnt + 9;
		else if(arr[i] == 'w' || arr[i] == 'x' || arr[i] == 'y' || arr[i] == 'z')
			cnt = cnt + 10;
	}
	printf("%d",cnt);
	
	return 0;
*/
	char abc[15];
	
	int i, cnt = 0;
	
	scanf("%s",abc);
	for(i = 0; i <= 15; i++)
	{
		if(abc[i] >= 65 && abc[i] <= 67)
			cnt += 3;
		else if(abc[i] >= 68 && abc[i] <= 70)
			cnt += 4;
		else if(abc[i] >= 71 && abc[i] <= 73)
			cnt += 5;
		else if(abc[i] >= 74 && abc[i] <= 76)
			cnt += 6;
		else if(abc[i] >= 77 && abc[i] <= 79)
			cnt += 7;
		else if(abc[i] >= 80 && abc[i] <= 83)
			cnt += 8;
		else if(abc[i] >= 84 && abc[i] <= 86)
			cnt += 9;
		else if(abc[i] >= 87 && abc[i] <= 90)
			cnt += 10;
	}
	printf("%d",cnt);

}
