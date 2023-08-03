#include <stdio.h>

/**
 * if the the defined VER is not meeting condition the
 * error will be printed before complition
 * test by changing 4 to 5 or removing the whole line
 *
 */

#define VER 4 

int main()
{
#if VER == 1
	printf("This is for Version1 \n");
#elif VER == 2
	printf("This is for version2\n");
#elif VER == 3
	printf("This is for Version3\n");
#elif VER == 4
	printf("This is Version 4\n");
#else
#error "Please provide valid Macro Ver"
#endif
}
