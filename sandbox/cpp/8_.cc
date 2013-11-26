
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;

#define OFFSET(p, b) ((int)((size_t) (p) - (size_t) (b)))
#define ARROFF(e, a) ((size_t) (OFFSET(e, a) / sizeof(a[0])))
/* if the p is arr, use like OFFOF((void *) arr, n) */
#ifdef __cplusplus
#define OFFOF(p, n) ((typeof(p)) ((char *) (p) + (n)))
#else
#define OFFOF(p, n) ((typeof(p)) ((void *) (p) + (n)))
#endif

static char ** get_input(int num) {
	char **inputs = (char **) malloc(sizeof(char *) * num);
	if (inputs == NULL) {
		return NULL;
	}

	string line;
	int i = 0;
	for (i = 0; i < num; i++) {
		getline(cin, line);
		inputs[i] = (char *) malloc(line.size() + 1);
		if (inputs[i] == NULL) {
			continue;
		}
		strcpy(inputs[i], line.c_str());
	}

	return inputs;
}

static void destroy_input(char **inputs, int num) {
	if (inputs == NULL || num < 0) {
		return;
	}
	int i = 0;
	for (i = 0; i < num; i++) {
		free(inputs[i]);
	}
	free(inputs);
}

int isprime(unsigned long num) {
	int i, s;

	s = (int) (num / 2);
	for (i = 2; i <= s; i++) {
		if (num % i == 0) {
			return 0;
		}
	}

	return 1;
}

int main(int argc, char *argv[]) {
	char **inputs = NULL;
	int num = 0;
	for (;;) {
		inputs = get_input(1);
		num = atoi(inputs[0]);
		destroy_input(inputs, 1);
		if (num == 0) {
			break;
		} else if (num < 1 || num > 500) {
			printf("OUT OF RANGE\n");
		} else {
			if (isprime(num)) {
				printf("TRUE\n");
			} else {
				printf("FALSE\n");
			}
		}
	}

	return 0;
}

