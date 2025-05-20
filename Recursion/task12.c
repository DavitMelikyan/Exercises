int digmul(int num) {
        if (num >= 0 && num < 10) {
                return num;
        }
        return (num % 10) * digmul(num / 10);
}
