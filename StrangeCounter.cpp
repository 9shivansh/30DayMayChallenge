// Complete the strangeCounter function below.
long strangeCounter(long t) {
    long val{3};
    while (t > val) {
        t -= val;
        val *= 2;
    }
    long result = val - t + 1;
    return result;

}