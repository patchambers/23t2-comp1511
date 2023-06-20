// Tutorial 4 task 1: Copying values from one array into another, following 
// these tasks
// 1. Create an array of doubles with 3 elements, each with a non-zero value.
// 2. Create another array of doubles with 10 elements where every element initialised to 0.0.
// 3. Create a while loop that loops through every element of the first array.
// 4. Copy the elements of the first array into the second array (leave 0's at the end)
// 5. Create a while loop that prints out all the elements of the second array.

#include <stdio.h>


int main(void) {

    double array1[3]= {1.1, 2.2, 3.3};
    double array2[10]={0.0};
  
    int i = 0;
    while (i < 3) {
        array2[i] = array1[i];
        i++;
    }

    int j = 0;
    while (j < 10) {
        printf("%lf\n", array2[j]);
        j++;
    } 
    return 0;
}
