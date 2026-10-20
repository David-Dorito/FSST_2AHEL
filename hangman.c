#include <stdio.h>

int main() {
	const char secret = 'X';
	char guess;

	scanf(" %c", &guess);

	if (guess == secret) {
		printf("Treffer: %c", secret);
	} else {
		printf("Fail");
	}

	return 0;
}
