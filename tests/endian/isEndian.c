#include <stdio.h>

int main()
{
	short a = 0x1122;
	char b = *(char *)&a;
	if(b == 0x11){
		printf("big_edition.\n");
	} else {
		printf("little_edition.b = %x\n", b);
	}
	return 0;
}
