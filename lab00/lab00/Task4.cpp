// Developed by Smetaniuk on 22.09.2022

int GCD_Loop(int value1, int value2) {
	while (value1 != value2) { value1 > value2 ? value1 -= value2 : value2 -= value1; }
	return value1;
}

int GCD_Recursive(int value1, int value2) {
	if (value1 == value2) return value1;
	return value1 > value2 ? GCD_Recursive(value1 - value2, value2) : GCD_Recursive(value1, value2 - value1);
}