# Time-complexity-comparison
C program to compare algorithm time complexity of various sorting algorithm
PROBLEM STATEMENT: Draw a table comparing the time complexity of sorting algorithms for selection, insertion and bubble sort with respect to input data. Input data should be taken from a file and output result will be stored in output file. Programs should be written using dynamic memory allocation.
Algorithm: 
STEP 1:  Open the file from where data will be taken.
      Repeat step 2 to step 4 as long as the user wants
STEP 2: Dynamically allocate space to store the required file data.
STEP 3: Store the data from the file to the allocated space.
STEP 4: Call the sort function on the dynamically allocated space. 
     End of loop.
Step 5: End.

Algorithm for sort function
Step 1: Start<-clock()
Step 2:  Apply insertion sort on the array.
Step 3: Store the sorted array in a file.
Step 4: Display time required <-clock()-start.
Step 5: Start<-clock()
Step 6:  Apply bubble sort on the array.
Step 7: Store the sorted array in a file.
Step 8: Display time required <-clock()-start.
Step 9: Start<-clock()
Step 10:  Apply selction sort on the array.
Step 11: Store the sorted array in a file
Step 12: Display time required <-clock()-start.
Step 13: end.
