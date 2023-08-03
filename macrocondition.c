#include <stdio.h>

#define VER 3

int main()
{
#if VER >= 1
	printf("This is for Version1 \n");
#endif
#if VER >= 2
	printf("This is for version2\n");
#endif
#if VER >= 3
	printf("This is for Version3\n");
#endif
#if VER >= 4
	print("This is Version 4\n");
#endif
}
