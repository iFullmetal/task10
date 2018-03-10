#include <iostream>
#include "task1.h"
#include <stdio.h>

void taskOne()
{
	int mounth[13];
	int theBiggest[13];
	int theSmallest [13];
	int biggestMonth = 0;
	int smallestMonth = 0;
	int periodLow;
	int periodHight;
	printf_s("\nSelect the first mounth of the period:");
	scanf_s("%d", &periodLow);
	printf_s("\nSelect the second mounth of the period:");
	scanf_s("%d", &periodHight);
	for (int i = periodLow; i <= periodHight; i++)
	{
		theBiggest[i] = 0;
		theSmallest[i] = 0;
		printf("\nEnter the gain of %d month ", i, " \n");
		scanf_s("%d", &mounth[i]);
	}

	for (int i = periodLow; i <= periodHight; i++) {
		for (int j = periodLow + 1; j <= periodHight; j++) {
			if (mounth[i] < mounth[j]) {
				theBiggest[i]++;
			}
			if (mounth[i] > mounth[j]) {
				theSmallest[i]++;
			}
		}
		if (theBiggest[i] == 0) {
			biggestMonth = i;
		}
		if (theSmallest[i] == 0) {
			smallestMonth = i;
		}
	}
	printf("\nThe biggest gain of the period is:%d from the %d month", mounth[biggestMonth], biggestMonth);
	printf("\nThe smallest gain of the period is:%d from the %d month", mounth[smallestMonth], smallestMonth);
}

