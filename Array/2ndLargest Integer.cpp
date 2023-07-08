/*Given an array Arr of size N, print second largest distinct element from an array.
 If 2nd largest element doesn't exist then return -1.*/

//  Solution:

int print2largest(int arr[], int n)
{
	int max = 0, max2 = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= max)
		{
			max = arr[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == max)
		{
			arr[i] = -1;
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= max2)
		{
			max2 = arr[i];
		}
	}
	if (max2 == 0)
	{
		return -1;
	}

	return max2;
}
