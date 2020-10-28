#include "phepcong.h"
#include <stdlib.h>     /* atoi */

int main(int argc,char** argv) {
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	add(a, b);
}