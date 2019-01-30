/*
Standard and faster variant of bubble sort for integer arrays.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

/* Sort an array using bubble sort */
void simpleSort(int a[], int size)
{
	for (int i = 1; i < size; i++)
	{
		// Swap neighboring values in incorrect order
		if (a[i] < a[i - 1])
		{
			// Swap values
			int swap = a[i];
			a[i] = a[i - 1];
			a[i - 1] = swap;

			// Move back to compare smaller value to its left neighbor
			if (i > 1)
				i -= 2;		// Incremented at end of iteration => Effectively: i = i - 1
		}
	}
}

/* Sort an array using faster bubble sort variant */
void fastSimpleSort(int a[], int size)
{
	for (int i = 1; i < size; i++)
	{
		// Swap neighboring values in incorrect order
		if (a[i] < a[i - 1])
		{
			int maxIndex = i;

			do {
				// Swap values
				int swap = a[i];
				a[i] = a[i - 1];
				a[i - 1] = swap;

				// Move back to compare smaller value to its left neighbor
				i--;
			} while ((i > 0) && (a[i] < a[i - 1]));

			i = maxIndex;
		}
	}
}
