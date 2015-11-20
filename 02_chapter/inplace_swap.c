#include<stdio.h>

void inplace_swap(char *x, char *y)
{
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}
int main() {
	char x = 's', y = 't';
	inplace_swap(&x, &y);
	printf("%c,%c\n",x,y);

	return 0;
}

// there is no performance advantage to this way of swapping, it is merely an intellectual amusement.
