#include <stdio.h>
#include <fcntl.h>	// open 
#include <unistd.h>	// close 
#include <string.h>

// Open the export file to GPIO pin # specified by num
int export_pin(char *num)
{	
	int fe = open("/sys/class/gpio/export", O_WRONLY);
	if (fe < 0) {
		fprintf(stderr, "\tError enabling\n");
		return -1;
	}
	write(fe, num, strlen(num));
	close(fe);
	usleep(1000000);	// Wait 1s for export process
	return 0;
}

// Disable GPIO pin specified by num
int unexport_pin(char *num)
{
	int fe = open("/sys/class/gpio/unexport", O_WRONLY);
	if (fe < 0) {
		fprintf(stderr, "\tError disabling\n");
		return -1;
	}
	write(fe, num, strlen(num));
	close(fe);
	usleep(1000000);	// Wait 1 sec
	return 0;
}

// Configure pin direction as "in" or "out"
int set_dir(char *num, char *dir)
{
	char *path = "/sys/class/gpio/gpio";
	char direction[11] = "/direction"; 
	int fd;

	// Build the direction file path
	strcat(path, num);
	strcat(path, direction);

	// Open file and set pin direction
	fd = open(path, O_WRONLY);
	if(fd < 0) {
		fprintf(stderr, "\tError direction!\n");
		return -1;
	}
	write(fd, dir, strlen(dir));
	close(fd);

	return 0;
}

// Set pin high or low depending on val
int set_val(char *num, char *val)
{
	char *path = "/sys/class/gpio/gpio";
	char value[7] = "/value";
	int fv;

	// Build the value file path
	strcat(path, num);
	strcat(path, value);

	// Open value file and check if it opened
	fv = open(path, O_WRONLY);
	if(fv < 0) {
		fprintf(stderr, "\tError writing value!\n");
		return -1;
	}

	// Set pin
	write(fv, val, strlen(val));
	return fv;
}
