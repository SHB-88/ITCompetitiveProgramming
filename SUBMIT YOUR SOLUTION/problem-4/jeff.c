#include <stdio.h>

void merge(int array1[], int array2[], int m, int n)
{
	for (int i = n - 1; i >= 0; i--) {
	
		int j, last = array1[m - 1];
		for (j = m - 2; j >= 0 && array1[j] > array2[i]; j--)
			array1[j + 1] = array1[j];

		if (last > array2[i]) {
			array1[j + 1] = array2[i];
			array2[i] = last;
		}
	}
}
int main()
{
	int array1[] = { 5 , 8 , 9 , 10 };
	int array2[] = { 1 , 2 , 100 };
	int m = sizeof(array1) / sizeof(array1[0]);
	int n = sizeof(array2) / sizeof(array2[0]);
	merge(array1, array2, m, n);

	printf("After Merging \nFirst Array: ");
	for (int i = 0; i < m; i++)
		printf("%d ", array1[i]);
	printf("\nSecond Array: ");
	for (int i = 0; i < n; i++)
		printf("%d ", array2[i]);
	return 0;
}
