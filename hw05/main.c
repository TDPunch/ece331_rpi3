#include <stdio.h>
#include "gpio.h"

int main(int argc, char *argv[])
{
	int b = 0b11111111;

	// Export 8 GPIO pins for the DAC
	export_pin("4");	
	export_pin("17");
	export_pin("18");
	export_pin("27");
	export_pin("22");
	export_pin("23");
	export_pin("24");
	export_pin("25");

	// Configure all 8 DAC GPIO as output
	set_dir("4", "out");
	set_dir("17", "out");
	set_dir("18", "out");
	set_dir("27", "out");
	set_dir("22", "out");
	set_dir("23", "out");
	set_dir("24", "out");
	set_dir("35", "out");

	return 0;
}
