// wap in c for to find common elements in two arrays
//e.g. arr = 1 2 3 4 5
// brr = 1 6 7 3 5 2
// o/p 1 2 3

#include <stdio.h>

void main()
 {
	int arr[5] = {1, 2, 3, 4, 5};
	int brr[6] = {1, 6, 7, 3, 2};

	printf("Common elements: ");

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 6; j++) {
			if(arr[i] == brr[j]) {
				printf("%d ", arr[i]);
				break;
			}
		}
	}
}



