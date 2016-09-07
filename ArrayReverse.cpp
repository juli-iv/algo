#include<iostream>
// DO NOT USE THIS IN PRODUCTION
#ifndef ARRAY_SIZE
    #define ARRAY_SIZE(x) (sizeof(x)/sizeof(x[0]))
#endif
using namespace std;

void printArray(int *, int);
void process(int *, int);
void reverseArray(int*, int);

/**
 * Main entry point of the application.
 * 
 * @return application execution status
 */
int main() {
    int oddArray[] = {0, 1, 2, 3, 4};
    int arraySize = ARRAY_SIZE(oddArray);

    cout << "Array odd size:" << endl;
    process(oddArray, arraySize);

    int evenArray[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    arraySize = ARRAY_SIZE(evenArray);

    cout << "\nArray even size:" << endl;
    process(evenArray, arraySize);

    return 0;
}

/**
 * Print given array elements to the console output.
 * 
 * @param array the array to be print
 * @param size the size of the array
 */
void printArray(int *array, int size) {
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout<<endl;
}

/**
 * Process given array.
 * 
 * @param array the array to be processed
 * @param arraySize the size of the array
 */
void process(int *array, int arraySize) {
    printArray(array, arraySize);        
    reverseArray(array, arraySize);    
    printArray(array, arraySize);
}

/**
 * Reverse elements order of the array.
 * 
 * @param array the array which elements will be reversed
 * @param arraySize the size of the array
 */
void reverseArray(int* array, int arraySize) {   
    for (int i = 0; i < (arraySize / 2); i++) {        
        int last = arraySize - 1 - i;        
        array[i] = array[i]^array[last]^(array[last] = array[i]);       
    }
}
