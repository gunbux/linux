// SPDX-License-Identifier: GPL-2.0
#include <linux/kernel.h>
#include <linux/string.h>

/* Copies up to n bytes of src into dst and NUL-terminates it. */
size_t bench_copy(char *dst, const char *src, size_t n)
{
	size_t i;

	for (i = 0; i <= n && src[i]; i++)
		dst[i] = src[i];
	dst[i] = 0;
	return i;
}
