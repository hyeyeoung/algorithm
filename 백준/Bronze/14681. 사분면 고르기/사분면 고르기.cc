#include <stdio.h>

int main()
{
	int x,y;
	scanf("%d\n%d", &x, &y);
	
	if (x >= -1000 && x <= 1000 && x != 0)
	{
		if (y >= -1000 && y <= 1000 && y != 0)
		{
			if (x > 0 && y > 0)
				printf("1");
			else if (x < 0 && y > 0)
				printf("2");
			else if (x < 0 && y < 0)
				printf("3");
			else if (x > 0 && y < 0)
				printf("4");
		}
	}

	return 0;

}