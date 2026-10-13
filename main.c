// clang-format off

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRY_COUNT 10
#define SOLUTION_MAX 10

typedef enum {
	SUCCESS,
	UNEXPECTED_INPUT
} ErrorCode;

int main() {
	srand(time(NULL));

	const int solution = (rand() % SOLUTION_MAX) + 1;
	int userNum;

	for (int tries = TRY_COUNT; tries > 0; tries--) {
		printf("guess the number: ");
		scanf("%d", &userNum);

		if (userNum == -1) {
			printf("answer: %d\n", solution);
		} else if (userNum < solution) {
			printf("too small\n");
		} else if (userNum > solution) {
			printf("too large\n");
		} else if (userNum == solution) {
			printf("correct\n");
			break;
		} else {
			printf("error: enexpected user input, input: %d, solution: %d", userNum, solution);
			return UNEXPECTED_INPUT;
		}
	}

	return SUCCESS;
}

// clang-format on
