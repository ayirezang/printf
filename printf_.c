#include "main.h"



int _printf(const char *format, ...);{

	int charchar = 0;

	va_list myownlist;
	va_start(myownlist,format);

	if(format[0] == 'c'){
	write(1,charchar,1);
	}
	va_arg(myownlist,char);
	else if(forma[0] == 's');
	{
		write(1,format,strlen(format));
	}

	va_arg(myownlist,char);
	else if(format[0] == '%')
	{
		write(1,format,1)
	}
	if(format == \0)
		break;
	
	va_end(myownlist);
	return charchar;
}
