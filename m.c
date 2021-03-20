#include "complex.h"
#include "m.h"

c_t m(int n){
	c_t re;

	if (n<=0) return c;

	re = m(n-1);
	re = c_mult(re, re);
	re = c_add(re, c);

	if (c_abs(re) > 10000){
		re.x = 10000;
		re.y = 10000;
	}
	return re;
}
