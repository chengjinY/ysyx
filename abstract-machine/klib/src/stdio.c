#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

char* num2str(char *str, int num) {
	char tmp[12];
	if (num < 0) {
		*str++ = '-';
		num = -num;
	}
	int len = 0;
	if (num == 0) tmp[len++] = '0';
	else while (num) {
		tmp[len++] = num % 10 + '0';
		num = num / 10;
	}
	while (len-- > 0) {
		*str++ = tmp[len];
	}
	return str;
}

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
	int n;
	va_list args;
	va_start(args, fmt);
	n = vsprintf(out, fmt, args);
	va_end(args);
	return n;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
	char *s;
	char *str;
	for (str = out; *fmt; fmt++) {
		if (*fmt != '%') {
			*str++ = *fmt++;
			continue;
		}
	  switch (*fmt) {
			case 'd':
				str = num2str(str, va_arg(ap, int));
				break;
			case 's':
				s = va_arg(ap, char *);
				while (*s) {
					*str++ = *s++;
				}
				break;
		}
	}
	*str = '\0';
	return str - out;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
