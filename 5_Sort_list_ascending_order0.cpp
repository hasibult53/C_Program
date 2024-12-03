#include <iostream>
using namespace std;

void sort(int data[], int n){
    int i, j, t;
    for(i = 0; i < n; i++)  // Outer loop for multiple passes
        for(j = 0; j < n - 1; j++)  // Inner loop to compare adjacent elements
        {
            if (data[j] > data[j + 1]){  // Swap if out of order
                t = data[j];
                data[j] = data[j + 1];
                data[j + 1] = t;
            }
        }
}

int main(){
    int a[50], i, n;
    cout << "Enter how many elements to sort: ";
    cin >> n;
    cout << "Enter elements: ";
    for(i = 0; i < n; i++)  // Read elements into the array
        cin >> a[i];

    sort(a, n);  // Calling the sort function

    cout << "Sorted array is: \n";
    for(i = 0; i < n; i++)  // Output the sorted array
        cout << a[i] << "\t";
    return 0;
}

// HH
