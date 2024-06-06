#include <iostream>
using namespace std;

void bubble_sort(int a[], int size) {
    int hold = 0;
    int i = 0;
    int j = 0;
    bool switched;

    for(i = 0; i < size - 1; i++){
        switched = false;
        for(j = 0; j < size - i - 1; j++){
            if(a[j] > a[j+1]){
                switched = true;
                hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
        if (!switched) break;
    }
}

int main() {
    int arr[6];

    cout << "Masukkan uangnya: ";
    for(int i = 0; i < 6; i++){
        cin >> arr[i];
    }

    cout << "Before sorting: \n";
    for(int i = 0; i < 6; i++) cout << arr[i] << " ";
    cout << "\n";
    
    bubble_sort(arr, 6);
    
    cout << "After sorting: \n";
    for(int i = 0; i < 6; i++) cout << arr[i] << " ";
    cout << "\n";

    return 0;
}