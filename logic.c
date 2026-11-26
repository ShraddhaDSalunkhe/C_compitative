bool canAliceWin(int n) {
    if (n < 10) {
        return false;
    }

    n = n - 10;

    int stones = 9;
    bool aliceTurn = false;

    while (n >= stones) {
        n = n - stones;
        stones--;

        aliceTurn = !aliceTurn;
    }

    return aliceTurn;
}
