#include "QuickSort.h"

int QuickSort::partition(vector<int> &arr, int l, int h)
{
	int pivot = arr[l];
	int cnt = 0;
	for (int i = l + 1; i <= h; i++)
		if (arr[i] <= pivot)
			cnt++;
	int pI = l + cnt;
	swap(arr[pI], arr[l]);
	int i = l, j = h;
	while (i < pI && j > pI)
	{
		while (arr[i] <= pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i < pI && j > pI)
			swap(arr[i++], arr[j--]);
	}
	return pI;
}

void QuickSort::quickSortHelper(vector<int> &arr, int l, int h)
{
	if (l >= h)
		return;
	int p = partition(arr, l, h);
	quickSortHelper(arr, l, p - 1);
	quickSortHelper(arr, p + 1, h);
}

vector<int> QuickSort::sort(vector<int> arr)
{
	quickSortHelper(arr, 0, arr.size() - 1);
	return arr;
}