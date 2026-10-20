#include <stdio.h>

int main() {
	char secret = 'X';
	char guess = 'X';

	if (guess == secret) {
		printf("Treffer: %c", secret);
	} else {
		printf("Fail");
	}

	return 0;
}
