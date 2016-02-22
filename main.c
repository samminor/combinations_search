#include <string.h>
#include <stdlib.h>
#include <stdio.h>

const int count=6;
const static char opts[] = "abcdef";
static char combo[7] = "";

void func(int order, int start)
{
	for(int i = start; i < count; i++) {
		combo[order] = opts[i];
		if (!order) {
			printf("%d %s\n", i, combo);
			continue;
		}
		func(order - 1, i + 1);
		if (i + order == count)
			return;
	}
}

int main(int argc, char **argv)
{
	for (int i = 0; i < count; i++)
		func(i, 0);
}
