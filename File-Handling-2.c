#include <stdio.h>
int main()
{
	FILE* demo;
	int display;
	demo = fopen("demo_file.txt", "r");
	while(1)
	{
		display = fgetc(demo);
		if (demo==NULL)
		{
		printf("%c", display);
		break;
		}
	}
	fclose(demo);
	return 0;
}
