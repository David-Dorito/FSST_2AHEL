#include <stdio.h>

int writeMatches(const char* secret, char* guessed, int len, char guess) {
	int matches = 0;
	for (int i = 0; i < len; i++) {
		if (secret[i] == guess) {
			guessed[i] = guess;
			matches++;
		}
	}

	return matches;
}

int main() {
	const char secret[] = "word";
	char guessed[sizeof(secret)];
	guessed[sizeof(secret) - 1] = '\0';

	char guess;

	for (int i = 0; i < sizeof(guessed) - 1; i++) {
		guessed[i] = '_';
	}

	if (scanf(" %c", &guess) != 1) {
		printf("Ungültige eingabe");
		return 1;
	}

	int matches = writeMatches(secret, guessed, sizeof(secret) - 1, guess);

	for (int i = 0; i < sizeof(guessed) - 1; i++) {
		printf("%c ", guessed[i]);
	}
	printf("matches: %d\n", matches);

	return 0;
}
