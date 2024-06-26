int is_prime(int number) {
    if (number == 0 || number == 1) {
        return 0;
    }
    if (number == 2) {
        return 1;
    }
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}