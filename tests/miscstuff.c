#include <stdio.h>

typedef int foo(const char *str);
int puts(const char *);


void
func(foo *fp) {
	fp("hello");
}	

typedef int (ffoo)[20];

char	buf[20] = "lol";
char	buf2[] = "hmmmmm";

int
main(void) {
	1?0 :   1 ? 1,1  :   2;
	enum trash {
	alignment = ((size_t) &((struct { char __slot1; long double __slot2; } *)0)->
		__slot2),
	};
	struct test {
		char	buf[10];
		int	x;
	} t = {
		"hello", 
		123
	};
	 
	func(puts);
	switch (2) case ((char)8): ; 

	puts(buf);
	puts(buf2);
	strcpy(buf, "hehehehehehehehehe");
	puts(buf);
	puts(buf2);
	printf("%s,%d\n", t.buf, t.x);
}
 
