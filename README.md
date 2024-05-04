# cpp-Sorting-algorithms
Selection Sort:
Selection sort works by dividing the list into sorted and unsorted portions. It repeatedly finds the minimum element from the unsorted section and swaps it with the first element in the sorted section, gradually expanding the sorted portion until the entire vector/list is ordered.

In the provided program selection sort function uses two nested loops to sort the vector:

Outer Loop (controlled by i):
o	This loop iterates through the list/vector, marking the first i elements as sorted.

Inner Loop (controlled by j):
o	This loop iterates through the unsorted elements (elements after i) where  j = (i + 1).
o	It starts by assuming the element at index i (the current position of the outer loop) is the minimum.
o	It then compares each element in the unsorted section (using j) with the current assumed minimum.
o	If a smaller element is found, its index is stored in min_pos.


Swapping (if necessary):
o	After iterating through the unsorted section, if min_pos is different from i, it means a smaller element was found.
                  if (min_pos != i){
o	In that case, the elements at i and min_pos are swapped using a temporary variable (temp) to place the smaller element in its correct sorted position (at index i).
         int temp = numbers[i];
         numbers[i] = numbers[min_pos];
         numbers[min_pos] = temp;
         
This process repeats for each element in the outer loop, gradually expanding the sorted section until the entire list/vector is sorted.

Time Complexity: O(n^2), where n is the number of elements in the list.

