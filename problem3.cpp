//Biggest and smallest number in an array

#include <iostream>
using namespace std;

int main() {

    int n; // Size of the array

    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) 
    {
        cout << "Invalid array size." << endl;
        return 1; // Exit if an error occuring
    }

    int arr[n]; // Declare an array of size n

    // Input array elements
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    // Initialize min and max with the first element
    int min_num = arr[0];
    int max_num = arr[0];

    // Iterate through the array to find min and max
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < min_num) 
        {
            min_num = arr[i];
        }
         else if (arr[i] > max_num)
        {
            max_num = arr[i];
        }
    }

   
    cout << "Smallest number in the array: " << min_num << endl;
    cout << "Biggest number in the array: " << max_num << endl;

    return 0;
}
