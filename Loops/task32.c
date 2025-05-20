int isPalindrome(int x) {
    int revnum1 = 0;
    int revnum2 = x;
    int revnumres = 0;
    int count = 0;
    int countnum = x;
    int tens = 1;
    while (countnum > 0) {
        countnum /= 10;
        ++count;
    }
        --count;
    while (count > 0) {
        tens *= 10;
        --count;
    }
    while (revnum2 > 0 && tens > 0) {
		revnum1 = revnum2 % 10;
		revnum2 /= 10;
        revnumres += revnum1 * tens;
        tens /= 10;
    }
    if (revnumres == x) {
        return 1;
    } else {
        return 0;
    }
}
