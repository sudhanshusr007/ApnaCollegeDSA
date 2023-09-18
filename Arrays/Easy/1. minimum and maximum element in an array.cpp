pair<long long, long long> getMinMax(long long a[], int n) {
    if (n == 0) {
        return {LLONG_MAX, LLONG_MIN};
    }

    long long minVal = a[0];
    long long maxVal = a[0];

    for (int i = 1; i < n; ++i) {
        if (a[i] < minVal) {
            minVal = a[i];
        } else if (a[i] > maxVal) {
            maxVal = a[i];
        }
    }

    return {minVal, maxVal};
}