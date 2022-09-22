// Developed by Smetaniuk on 22.09.2022

int getNotNegative(int value) {
	return value < 0 ? 0 : value;
}

int divideWithTheRemainder(int divisible, int divisor) {
	while ((divisor <= divisible)) {
		divisible -= divisor;
	}
	return getNotNegative(divisible);
}