#include "main.h"



int _printf(const char *format, ...);{

	int charchar = 0;

	va_list myownlist;
	if(format == NULL){
		return (-1);

	}
	va_start(myownlist,format};

	while(*format){

