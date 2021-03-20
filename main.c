#include "complex.h"
#include "m.h"
#include "mprint.h"
c_t c;

int main(){
	char img[ROW][COL];
	int i, j;
	double sx=(0.47+2)/COL, sy=(1.12+1.12)/ROW;//step x & step y
	c_t re;

	c.x = -2.0;
	c.y = -1.12;

	for (i=0; i<ROW; i++){
		for (j=0; j<COL; j++){
			re = m(15);
			if (c_abs(re) > 10000) img[i][j] = ' ';
			else img[i][j] = '*';

			c.x += sx;
		}
		img[i][j-1] = '\0';
		c.y += sy;
		c.x = -2.0;
	}
	mprint(img);
	return 1;
}
