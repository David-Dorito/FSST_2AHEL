#include <stdio.h>

int main() {
	const char secret[] = "Password";
	char guess;

	if (scanf(" %c", &guess) != 1) {
		printf("Ungültige eingabe");
		return 1;
	}

	int matches = 0;
	for (int i = 0; i < sizeof(secret) - 1; i++) {
		if (secret[i] == guess) {
			matches++;
		}
	}
	printf("matches: %d\n", matches);

	return 0;
}
