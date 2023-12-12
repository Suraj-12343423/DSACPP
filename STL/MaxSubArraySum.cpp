long long maxSubarraySum(vector<int> arr, int n) {
    long long curr_sum = arr[0];
    long long max_sum = arr[0];

    // Write your code here.

    for (int i = 1; i < n; i++) {
        curr_sum = max(static_cast<long long>(arr[i]), curr_sum + arr[i]);
        max_sum = max(max_sum, curr_sum);
    }

    return max(max_sum, 0LL);
}


