int getNotNegative(int value) {
	return value < 0 ? 0 : value;
}

int divideWithTheRemainder(int divisible, int divisor) {
	do {
		divisible -= divisor;
	} while ((divisor <= divisible));
	return getNotNegative(divisible);
}