#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *a = (int *)malloc(2 * sizeof(int));
	int *b = (int *)calloc(2, sizeof(int));

	/* Verify memory has successfully been allocated */
	if ((a == NULL) || (b == NULL))
		exit(EXIT_FAILURE);

	/* Modify and/or print allocated data */
	b[0] = 9;
	printf("a = (%d, %d)\n", *a, *(a + 1));
	printf("b = (%d, %d)\n", b[0], b[1]);

	/* Free allocated memory */
	free(a);
	free(b);

	getchar();
	return 0;
}