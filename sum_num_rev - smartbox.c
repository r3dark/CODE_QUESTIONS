/*1 to 1000, sum of num + rev(sum) should have each digit odd, print all those numbers, smartbox's interview question
*/

#include <stdio.h>
void main()
{
	int i, count = 0;
	for(i = 12; i < 1000; i++)
	{
		int rev = 0;
		int sum = i;
		while(sum != 0)
		{
			rev = (rev * 10) + (sum % 10);
			sum = sum / 10;
		}
		sum = i + rev;
		int flag = 0;
		//int t = sum;
		while(sum != 0)
		{
			if((sum % 10) % 2 == 0)
			{
				flag = 1;
				break;
			}
			sum = sum / 10;
		}
		if(flag == 0)
		{
		    //printf("%d\n", t);
		    count++;
			printf("%d is reversible\n", i);
		}
	}
	printf("\nTotal %d numbers\n", count);
}
