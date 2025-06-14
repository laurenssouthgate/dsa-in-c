#include <stdio.h>
#include <string.h>

int char_count(char *str, char c);

int main(void) {
	char test[5];
	test[0] = 't';
	test[1] = 'e';
	test[2] = 's';
	test[3] = 't';
	test[4] = '\0';

	printf("%s\n", test);

	char greeting[] = "Hello world!";

	printf("%s\n", greeting);

	int length = strlen(greeting);

	printf("length of string: %d\n", length);

	int count = char_count(greeting, 'o');

	printf("Number of '%c's in %s : %d\n", 'o', greeting, count);

	return 0;
}

int char_count(char *str, char c) {
	int len = strlen(str);
      	int count = 0;

	for (int i = 0; i < len; i++) {
		if (str[i] == c) {
      			count++;
      		}
	}

      return count;
}
