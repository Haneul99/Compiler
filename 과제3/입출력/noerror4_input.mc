/* 최소 공배수 구하기 */
int get(int number1, int number2) {
	int max = 0;
	int big;
	int small;   
    int k = 1;
	int answer;

	if (number1 >= number2) {
		big = number1;
		small = number2;
	}
	else {
		big = number2;
		small = number1;
	}

    while(k <= small) {
		if (number1 % k == 0 && number2 % k == 0) {
            max = k;
        }
        k++;
	}

    answer = number1 * number2;
    answer /= max;

    return answer;
}

int main() {
	int n = 10;
    int i = 0;
    while(i < n) {
		int n1 = 10;
        int n2 = 30;
		get(n1, n2);
        i++;
	}
}