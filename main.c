#include <stdio.h>

int main() {
	const int referenceNum = 255;
	int       userNum;

	for (int tries = 2; tries > 0; tries--) {
		printf("guess the number: ");
		scanf("%d", &userNum);

		if (userNum == referenceNum) {
			printf("correct\n");
			break;
		} else if (userNum < referenceNum) {
			printf("too small\n");
		} else if (userNum > referenceNum) {
			printf("too large\n");
		}
	}

	return 0;
}
