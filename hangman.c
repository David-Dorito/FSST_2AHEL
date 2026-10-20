#include <stdio.h>

int main() {
	const char secret = 'X';
	char guess;

	if (scanf(" %c", &guess) != 1) {
		printf("Ungültige eingabe");
		return 1;
	}

	if (guess == secret) {
		printf("Treffer: %c", secret);
	} else {
		printf("Fail");
	}

	return 0;
}
