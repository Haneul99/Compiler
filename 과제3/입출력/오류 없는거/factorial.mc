/*
	factorial program by recursive call
*/

int factorial(int n) {
	if (n == 1) return 1;
	else return n * factorial(n - 1);
}

void main() {
	int n, f;
	read(n);
	write(n);
	f = factorial(n);
	write(f);
}