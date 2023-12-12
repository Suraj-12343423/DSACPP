vector<int> rotateArray(vector<int> arr, int k) {
    int n = arr.size();
    
    // Ensure k is within the range [0, n)
    k = k % n;

    vector<int> rotatedArray(n);

    for (int i = 0; i < n; i++) {
        rotatedArray[(i - k + n) % n] = arr[i];
    }

    return rotatedArray;
}
