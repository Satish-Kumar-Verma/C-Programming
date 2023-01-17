#include <stdio.h>

enum designFlags {
	BOLD = 1,
	ITALICS = 2,
	UNDERLINE = 4
};

int main() {
	int myDesign = ITALICS | UNDERLINE; 

        //    00000010
        //  | 00000100
        //  ___________
        //    00000110

	printf("%d\n", myDesign);

	return 0;
}