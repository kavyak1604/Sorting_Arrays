# Sorting_Arrays
## Bubble sort and Selection Sort
a)Bubble Sort
Bubble Sort Algorithm is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.
b)Selection sort
Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list. 

## THEORY
a)Bubble sort<br>
Bubble sort takes minimum time (Order of n) when elements are already sorted. Hence it is best to check if the array is already sorted or not beforehand, to avoid O(N2) time complexity.Bubble sort performs the swapping of adjacent pairs without the use of any major data structure. Hence Bubble sort algorithm is an in-place algorithm.The bubble sort algorithm is stable.
Due to its simplicity, bubble sort is often used to introduce the concept of a sorting algorithm. 
In computer graphics, it is popular for its capability to detect a very small error (like a swap of just two elements) in almost-sorted arrays and fix it with just linear complexity (2n).
b)Selection Sort<br>
The algorithm repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first element of the unsorted part. This process is repeated for the remaining unsorted portion until the entire list is sorted. Time Complexity: The time complexity of Selection Sort is O(N2) as there are two nested loops:
One loop to select an element of Array one by one = O(N)
Another loop to compare that element with every other Array element = O(N)
Therefore overall complexity = O(N) * O(N) = O(N*N) = O(N2)
Auxiliary Space: O(1) as the only extra memory used is for temporary variables while swapping two values in Array. The selection sort never makes more than O(N) swaps and can be useful when memory writing is costly. 

## ALGORITHM
a)Bubble sort<br>
1)Start<br>
2)Create an integer variable called n to hold the array's size.<br>
3)Request that the user input the array's size and read the value into the variable n.<br>
4)To store the elements, declare an integer array arr of size n.<br>
5)Ask the user to enter each element in the array one at a time, then use a loop to read them into the arr array:<br>
6)Start a for loop from 0 to n-1 by setting the loop variable i.<br>
7)Show a prompt within the loop asking the user to input the i-th element and read it into arr[i].<br>
8)Sorting the elements in ascending order requires the implementation of an algorithm. The code in this instance use a straightforward selection sort method.<br>
9)End<br>
b)Selection sort<br>
1)Start<br>
2)Create a function selectionSort that takes an integer array arr as a parameter:<br>
a. Initialize integer variables i, j, and lst.<br>
b. Use an outer loop to iterate over the array from index 0 to the second-to-last index (i from 0 to 3).<br>
c. Within the outer loop, initialize lst to the current value of i.<br>
d. Use an inner loop to iterate over the array from the next index to the last index (j from i+1 to 4).<br>
e. Inside the inner loop, check if the element at index j is less than the element at index lst. If true, update lst to the value of j.<br>
f. After the inner loop, check if lst is not equal to i (indicating that a smaller element was found). If true, swap the elements at indices lst and i in the array.<br>
3)Create a function printArr that takes an integer array arr as a parameter:<br>
a. Initialize an integer variable i.<br>
b. Use a loop to iterate over the array from index 0 to 4 (i from 0 to 4).<br>
c. Inside the loop, print the element at index i followed by a space.<br>
4)In the main function:<br>
a. Declare an integer array arr with a size of 5 to store the user's numbers.<br>
b. Prompt the user to enter 5 numbers, one by one, and read them into the arr array.<br>
c. Call the selectionSort function, passing the arr array as a parameter, to sort the array in ascending order.<br>
d. Call the printArr function, passing the arr array as a parameter, to print the sorted array.<br>
5)End<br>

## CONCLUSION 
Hence in this repository programs using bubble sort and selection sorting of arrays were performed.





