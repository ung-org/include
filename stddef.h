#ifndef __STDDEF_H__
#define __STDDEF_H__

/*
UNG's Not GNU

MIT License

Copyright (c) 2011-2020 Jakob Kaivo <jkk@ung.org>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

/* ./src/stddef/NULL.c */
#define NULL                                                          ((void*)0)
/* ./src/stddef/offsetof.c */
#define offsetof(__type, __member)  ((size_t)((void*)&(((__type*)0)->__member)))

/* ./src/stddef/ptrdiff_t.c */
#ifndef __TYPE_ptrdiff_t_DEFINED__
#define __TYPE_ptrdiff_t_DEFINED__
#ifdef __LLP64__
# if ! defined __STDC_VERSION__ || __STDC_VERSION__ < 199909L
typedef __int64                                                       ptrdiff_t;
# else
typedef long long int                                                 ptrdiff_t;
# endif
#else
typedef long int                                                      ptrdiff_t;
#endif
#endif

/* ./src/stddef/size_t.c */
#ifndef __TYPE_size_t_DEFINED__
#define __TYPE_size_t_DEFINED__
#ifdef __LLP64__
# if !defined __STDC_VERSION__ || __STDC_VERSION__ < 199909L
typedef unsigned __int64                                                 size_t;
# else
typedef unsigned long long int                                           size_t;
# endif
#else
typedef unsigned long int                                                size_t;
#endif
#endif

/* ./src/stddef/wchar_t.c */
#ifndef __TYPE_wchar_t_DEFINED__
#define __TYPE_wchar_t_DEFINED__
typedef int                                                             wchar_t;
#endif



#endif
