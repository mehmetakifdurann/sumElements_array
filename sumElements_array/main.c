//This 'C' program finds the sum of array elements.
/*
 Example output:
    Enter the size of your array: 4
 
    Input elements: 10 20 60 80
 ----------------------------------
    Sum of all elements : 170.
 ! ! ! THE PROGRAM ENDS ! ! !
 
 */

//Created by Mehmet Akif Duran, 11 Jan, 2024

#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 1000

//function prototype.

int sum_array_elements(int[], int);

int main(void){//beginnig of the main function.
        
    //variable decleration(s).
    int userSize, userArray[ARRAY_SIZE];
    int counter;
    int total;
    
    //executable statement(s).
    
    // getting users array size and the elements of the array.
    
    printf("Enter the size of your array: \n");
        scanf("%d", &userSize);
    
    printf("Input elements : \n");
    
    for(counter=0 ; counter<userSize ;counter++)
        scanf("%d",&userArray[counter]);
    
    printf("------------------------------\n");
    
    total = sum_array_elements(&userArray,userSize);
    
    //function call, printing the result
    
    printf("Sum of all elements : %d \n ",total);
    
    
    return 0;
}//end of the main function.

//function definition.

int sum_array_elements(int arr[], int array_size){
    
    //variable decleration(s).
    
    int sum = 0;
    int counter;
    
    //executable statment(s).
    
    for(counter=0; counter<array_size ; counter++ )
        sum += arr[counter];
    
        return sum;
}
