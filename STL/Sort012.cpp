void sort012(int *arr, int n) {
    int low = 0, high = n - 1, current = 0;

    while (current <= high) {
        if (arr[current] == 0) {
            swap(arr[current], arr[low]);
            low++;
            current++;
        } else if (arr[current] == 2) {
            swap(arr[current], arr[high]);
            high--;
        } else {
            current++;
        }
    }
}
