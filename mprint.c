#include <stdio.h>
#include "mprint.h"

void mprint(char img[ROW][COL]){
	int i;

	for (i=0; i<ROW; i++)
		printf("%s\n", img[i]);
	
}
