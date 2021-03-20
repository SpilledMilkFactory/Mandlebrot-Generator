#include <math.h>
#include "complex.h"

c_t c_add(c_t a, c_t b){
	c_t re;
	re.x = a.x + b.x;
	re.y = a.y + b.y;
	return re;
}

c_t c_mult(c_t a, c_t b){
	c_t re;
	re.x = a.x*b.x - a.y*b.y;
	re.y = a.x*b.y + a.y*b.x;
	return re;
}

double c_abs(c_t a){
	return sqrt(a.x*a.x + a.y*a.y);
}
