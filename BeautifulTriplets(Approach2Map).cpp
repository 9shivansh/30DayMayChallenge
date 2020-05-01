int beautifulTriplets(int d, vector<int> arr) {
    unordered_map<int, int> m;
    int cnt = 0;
    for (int a : arr) {
        m[a] += 1;
        cnt += m[a-d]*m[a-2*d];
    }
    return cnt;
}