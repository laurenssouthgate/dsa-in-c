#include <stdio.h>

enum Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
typedef enum button { ON, OFF } Button;

Button press(Button current);
void print_button(Button current);

int main(void) {
	enum Day today = Saturday;
	enum Day tomorrow = Sunday;
	enum Day yesterday = Friday;

	Button power = ON;

	print_button(power);
	power = press(power);
	print_button(power);

	return 0;
}

 Button press(Button current) {
	if (current == ON) return OFF;
	else return ON;
}

void print_button(Button current) {
	if (current == ON) printf("ON\n");
	else if (current == OFF) printf("OFF\n");
}
