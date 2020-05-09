
int bt(int vacant, int p, int board[3][3], int source[3][3]) {
    if (vacant == 0) { // used up all 9 numbers
        if (board[0][0] + board[1][1] + board[2][2] != 15 ||
            board[0][2] + board[1][1] + board[2][0] != 15) { // check diagonals
            return 45; // large enough cost meaning not valid
        }
        int cost = 0;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cost += abs(board[i][j] - source[i][j]);
            }
        }
        return cost;
    }
    int v = p / 3, h = p % 3; // current position in the board

    int least = 45;
    for (int c = 1; c <= 9; ++c) {

        if (vacant & (1 << (c - 1))) {
            if (h == 2 && board[v][0] + board[v][1] + c != 15) continue; // check row
            if (v == 2 && board[0][h] + board[1][h] + c != 15) continue; // check column
            
            vacant &= ~(1 << (c - 1)); // mark the number as used
            board[v][h] = c;
            least = min(least, bt(vacant, p + 1, board, source));
            board[v][h] = 0;
            vacant |= (1 << (c - 1)); // recover
        }
    }
    return least;
}

int formingMagicSquare(int source[3][3]) {
    int initial[3][3] = {{0}, {0}, {0}};
    return bt(511, 0, initial, source); // 511 is all 1's for lowest 9 bits
}