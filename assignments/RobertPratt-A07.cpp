// C++ program for implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
  bool is_sorted = false;
  int pass_count = 0;
  
  while(!is_sorted){
    for(int i = 1, moved = 0; i < n; i++){
      if(arr[i - 1] > arr[i]){
        swap(arr[i - 1], arr[i]);
        moved++;
      }

      if(moved == 0)
        is_sorted = true;
      else
        is_sorted = false;
    }

    pass_count++;
    cout << "pass: " << pass_count << endl;
    printArray(arr, n);
  }
}

// Driver code
int main()
{
    int arr[9] = { 4, 2, 9, 6, 23, 12, 34, 0, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "A07 - written by Robert Pratt\n\n";

    cout << "Initial Array:\n";
    printArray(arr, n);

    cout << "\nIntermediate Steps:\n";
    bubbleSort(arr, n);
    cout<<"\nSorted array: \n";
    printArray(arr, n);
    return 0;
}
