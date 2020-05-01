int chocolateFeast(int n, int c, int m) {
    int choc = n/c;
    int wrap = choc;
    int new_choc = 0;
    while(wrap >= m){
        new_choc += wrap/m;
        wrap = (wrap / m) + (wrap % m);
    }
    return (choc + new_choc);
}

