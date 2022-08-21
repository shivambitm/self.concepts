#include<bits/stdc++.h>
using namespace std;

void shell() {
	//sort the elements with a distance of 5, go on doing until the gap becomes 1, compare and swap
	// /gap = n/2; gap = n/2=2;, compare and swap with gap of 2, then gap = n/2; 2/2-> 1, now it becomes insertion sort, just compare and interchange
	//n*log2(n), n = scan a list, 2 = no. of passes, }
	// O(n**3/2),shell sort doesn't take any extra space, shell sort comes under implace sorting

	int arr[] = {1, 55, 4, 84, 7, 36, 11, 2, 4, 69}; int n = 10;
	int gap, i, j;
	for (gap = n / 2; gap > 1; gap /= 2) {
		for (i = gap; i < n; ++i) {
			temp = arr[i];
			j = i - gap;
			while (j > 0 && arr[j] > temp) {
				arr[j + gap] = arr[j];
				j = j - gap;
			}
			arr[j + gap] = temp;
		}
	}
}


void radix() {
	//take 0 to 9 bins, scan thriugh elements, check last digit of integer from first index and put
	//in the bins 0 to 9 as {14,23,43,455,87,69,89,125,29}, it will go in the bins{0,1,2,3,4,5,6,7,8,9} - {(1),(125),(23,43),(14),(455),(1),(87),(1),(69,89,29)}
	//if elements are not sorted, again put it in bins, which no. is of highest order, that much no. of times we have to this thing like
	//highest no, is 458 then 4 times we've to this thing and if there is a no, like 45 then consider it as 048 in the 3rd time process for putting it in the bins
}
void bucketORbin(int arr[], int n) {
	//insert from front, delete from front,
	//kuch hashtable jaisa banana hota hai, just copy/paste then,takes more space
	int max, i, j;
	Node **Bins;
	max = findMax(arr, n);
	Bins = new Node m[max + 1];

	for (i = 0; i < max + 1; ++i) {
		Bins[i] = NULL;
	}

	for (i = 0; i < n; ++i) {
		Insert(Bins[arr[i]], arr[i]);
	}
	i = 0; j = 0;
	while (i < max + 1) {
		while (Bins[i] != NULL) {
			arr[j++] = Delete(Bin[i]);
		}
		i++;
	}
}//can we do the same thing with lesss no. of bins- radix sort dekho


void findMax(int arr[], int n ) {
	int max = INT32_MIN;
	int i;
	for (i = 0; i < n; ++i) {
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

void count(int arr[], int n) {
	int i, j, max, *C;
	max = findMax(arr, n);
	C = (int *)malloc(sizeof(int) * (max + 1);

	for (i = 0; i < max + 1; ++i) {
	C[i] = 0;
	}
	for (i = 0; i < n; ++i) {
	C[arr[i]]++;
	}
	i = 0; j = 0;
	while (j < max + 1) {
	if (C[j] > 0) {
			arr[i++] = j;
			C[j]--;
		}
		else
			j++;
	}
}


void MERGE(int arr[], int l, int mid, int h) {
	// int arr[] = {4, 5, 7, 88, 6, 14, 2, 9, 87, 3};
	int i, j, k; int B[100];
	while (i <= mid && j <= h) {
		if (arr[i] < arr[j]) {
			B[k++] = arr[i++];
		}
		else {
			B[k++] = arr[j++];
		}
	}
	for (; i <= mid; i++) {
		B[k++] = arr[i];
	}
	for (; j <= h; j++) {
		B[k++] = arr[j];
	}
	for (int i = l; i <= h; i++) {
		arr[i] = B[i];
	}
}

void merge() {
	//merge is not inplace, it takes extra space\, merge uses 2-way merging
	int arr[] = {4, 5, 7, 88, 6, 14, 2, 9, 87, 3}; int n = 10
	        int p, i, l, mid, h;
	for (p = 2; p <= n; p = p * 2) {
		for (i = 0; i + p - 1 < n; i = i + p) {
			l = i; h = i + p - 1;
			mid = [(l + h) / 2];
			MERGE(arr, l, mid, h);
		}
	}
	if (p / 2 < n) {
		MERGE(arr, 0, p / 2, n - 1);
	}
}//merginfg in done in post order, recursion utilises stack, merge uses extra space


void partition(int arr[], int l, int h) {
	//if all the element before that element are smaller and all the elements
	//after that element are greater, then we say that element is in a static position
	//students standing in line for prayer, then they itself finds their own position, that's actually quick sort
	//best case: if partitioin is in middle: tc: O(n*log n)
	//worst case: if partitioning is on any end: tc: O(n**2),if list is already sorted
	//average case: O(n*log n)
	//elements are in ascending/descending order, worst tc: O(N**2)
	//selection - selecting a position, finding an element. quick - selecting an element, finding a position for element where it shoiuld bee in the list
	//similarity is selection of index and element, so quick is also called selection exchange and partition exchange sort

	int pivot = arr[l]; int i = l, j = h; //i starts from low and j from high

	do {
		do {i++;} while (arr[i] <= pivot); //it it's smaller it should stop
		do {j--;} while (arr[j] > pivot); //if element is greater j should decrement
		if (i < j) swap(arr[i], arr[j]);
	} while (i < j)
		swap(arr[l], arr[j]);
	return j;
}

void quick() {
	int arr[] = {4, 5, 7, 88, 6, 14, 2, 9, 87, 3, INT32_MAX}, n = 11, i, l = 0, h = n - 1; //l=low,h=high

	int j;
	if (l < h) {
		j = partition(arr, l, h);
		quick(arr, l, j);
		quick(arr, j + 1, h);
	}
}




void selection() {
	//selecting a position, finding a element, only algorithm which sort with min. no. of swaps
	//good with less no.of swaps
	//adaptive means if the list is sorted, then algorithm takes min. time
	int arr[] = {4, 5, 7, 88, 6, 14, 2, 9, 87, 3}, n = 10;
	int i, j, k;
	for (int i = 0; i < n - 1; ++i) {
		for (int j = k = i; j < n; ++j) {
			if (arr[j] < arr[k])
				k = j;
		}
		swap(arr[i], arr[k]);
	}
}


void insertion() { //takes minimum o(1) and maximum o(n) time
	//benefit of insertion sort with linked list is that we don't have to shift the element,
	// without shifting we can put the element, isertion is designed for linked list
	//by nature it's adaptive, we didn't made it like bubble sort
	int arr[] = {4, 5, 7, 88, 6, 14, 2, 9, 87, 3}, n = 10;
	int i, j, x;
	for (i = 1; i < n; ++i) {
		j = i - 1;
		x = arr[i];
		while (j > -1 && arr[j] > x) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = x;
	}
}


void bubble(int arr[], int n) { //bubble sort is adaptive, we made it, bubble sort is stable also
	// int flag=0; //takes O(N) time minimum if the array is already sorted
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - 1 - i; ++i) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				// flag=1;
			}
		}//for checking it's adaptive or not meand the swap has been done once or not ?
		// if(flag==1){ cout<<"IT IS ADAPTIVE"<<endl;
		// break;}
		// else cout<<"NOT ADAPTIVE"<<endl;
	}
}

int main() {
	criteraFOrSorting() {
		// 1. no. of comparison
		// 2. no. of swaps
		// 3. Adaptive
		// 4. Stable - if there any duplicate elements in what is there in list
		//in sorted list, there order must be preserved
		// 5. Extra Memory
	}

	bubble; //tc: O(n*2)
	insertion;//tc: O(n*2)
	selection;//tc: O(n*2)
	heap;//tc: O(n*logn)
	merge;//tc: O(n*logn)
	quick;//tc: O(n*logn)
	tree;//tc: O(n*logn)
	shell;//tc: O(n*3/2)

	count;//tc: O(n)
	bucketORbin;//tc: O(n)
	radix;//tc: O(n)

	//first group is comparison based sort and second grp is index based sort
	return 0;
}