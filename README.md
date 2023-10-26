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





