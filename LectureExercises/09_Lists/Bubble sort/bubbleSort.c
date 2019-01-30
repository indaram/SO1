/*
Bubble sort to sort integer arrays.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

/* Sort an array using bubble sort */
void bubbleSort(int a[], int size)
{
	int isSwapped = 1;

	// Run iteratively through data until no neighbors are swapped in a complete run
	for (int lastID = size - 1; (lastID > 0) && isSwapped; lastID--)
	{
		isSwapped = 0;				// Neighboring values swapped (re-ordered) in this run?

		for (int i = 1; i <= lastID; i++)
		{
			// Swap neighboring values in incorrect order
			if (a[i] < a[i - 1])
			{
				int swap = a[i];
				a[i] = a[i - 1];
				a[i - 1] = swap;

				isSwapped = 1;		// New run through data
			}
		}
	}
}
