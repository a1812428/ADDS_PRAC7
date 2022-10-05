#include "Sort.h"
#ifndef QUICKSORT_H
#define QUICKSORT_H

class QuickSort : public Sort
{
public:
	int partition(vector<int> &arr, int start, int end);
	void quickSortHelper(vector<int> &arr, int start, int end);
	vector<int> sort(vector<int> arr);
};
#endif