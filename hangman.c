#include <stdio.h>
#include <stdbool.h>

#define MAX_FAILS 5

int strcmp(const char* str1, const char* str2) {
	bool isSame = true;
	for (int i = 0; (str1[i] != '\0' || str2[i] != '\0') && isSame; i++) {
		isSame = (str1[i] == str2[i]);
	}

	return isSame;
}

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

	int fails = 0;
	while (fails < MAX_FAILS) {
		if (scanf(" %c", &guess) != 1) {
			printf("Ungültige eingabe");
			return 1;
		}

		int matches = writeMatches(secret, guessed, sizeof(secret) - 1, guess);

		for (int i = 0; i < sizeof(guessed) - 1; i++) {
			printf("%c ", guessed[i]);
		}
		printf("matches: %d\n", matches);

		fails += (matches == 0);

		if (strcmp(guessed, secret))
			break;
	}

	return 0;
}
