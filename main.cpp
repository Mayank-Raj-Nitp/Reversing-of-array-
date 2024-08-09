#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements you want to store: ";
    cin >> n;
    int arr[n];


    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int new_arr[n];
    
    for (int i=0;i<n;i++){
        int x = arr[i]; // 1
        int y = arr[n-1-i]; // 4
        
        x = x+y; 
        y = x-y; // 1
        x = x-y; // 4
        
        new_arr[i] = x ; 
        new_arr[n-1-i] = y;
    }
    
    for (int i = 0; i<n;i++){
        cout<<new_arr[i]<<" ";
    }
    return 0;
}
