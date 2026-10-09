#include <stdio.h>

int main() {
	const int referenceNum = 255;
	int       userNum;

	printf("guess the number: ");
	scanf("%d", &userNum);

	if (userNum == referenceNum) {
		printf("correct");
	} else if (userNum < referenceNum) {
		printf("too small");
	} else if (userNum > referenceNum) {
		printf("too large");
	}

	return 0;
}
