#ifndef GPIO_H
#define GPIO_h

int export_pin(char *num);
int unexport_pin(char *num);
int set_dir(char *num, char *dir);
int set_val(char *num, char *val);

#endif
