
#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

struct Car {
	int speed;
	char name[50];
	float weight;

};

int main() {
	struct Car bmw;
	bmw.speed = 250;
	strcpy_s(bmw.name, "BMW M5");
	bmw.weight = 2500.00f;

	struct Car volga = { 100, "volga devyatka", 1700.00f };
	printf("%s ego skorost' : %d\n", bmw.name, bmw.speed);
	printf("%s ego skorost' : %d\n", volga.name, volga.speed);
	return 0;

}