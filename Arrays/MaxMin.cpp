#include<iostream>

using namespace std;

int main(){
    int size;
    cin >> size;

    int a[100];

    for(int i = 0; i < size; i++){
        cin >> a[i];
    }

    int max = a[0];  // Initialize max with the first element
    int min = a[0];  // Initialize min with the first element

    for (int i = 0; i < size; i++){
        if (a[i] > max){
            max = a[i];
        } else if (a[i] < min){
            min = a[i];
        }
    }

    cout << "Max element: " << max << endl;
    cout << "Min element: " << min << endl;

    return 0;
}



