int passThePillow(int n, int time) {
    int index = 1;
    int direction = 1;

    while (time > 0) {
        index += direction;
        if (index == n || index == 1) {
            direction = -direction;
        }

        time--;
    }

    return index;
}
