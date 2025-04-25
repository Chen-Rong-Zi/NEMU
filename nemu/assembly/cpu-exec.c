# 0 "src/cpu/cpu-exec.c"
# 0 "<built-in>"
# 0 "<命令行>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<命令行>" 2
# 1 "src/cpu/cpu-exec.c"
# 16 "src/cpu/cpu-exec.c"
# 1 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/cpu.h" 1
# 19 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/cpu.h"
# 1 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/common.h" 1
# 19 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/common.h"
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/14.2.1/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-pc-linux-gnu/14.2.1/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 402 "/usr/include/features.h" 3 4
# 1 "/usr/include/features-time64.h" 1 3 4
# 20 "/usr/include/features-time64.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 21 "/usr/include/features-time64.h" 2 3 4
# 1 "/usr/include/bits/timesize.h" 1 3 4
# 19 "/usr/include/bits/timesize.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 20 "/usr/include/bits/timesize.h" 2 3 4
# 22 "/usr/include/features-time64.h" 2 3 4
# 403 "/usr/include/features.h" 2 3 4
# 511 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 730 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 731 "/usr/include/sys/cdefs.h" 2 3 4
# 1 "/usr/include/bits/long-double.h" 1 3 4
# 732 "/usr/include/sys/cdefs.h" 2 3 4
# 512 "/usr/include/features.h" 2 3 4
# 535 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 3 4
# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/gnu/stubs.h" 2 3 4
# 536 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/bits/libc-header-start.h" 2 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/types.h" 1 3 4
# 27 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/types.h" 2 3 4
# 1 "/usr/include/bits/timesize.h" 1 3 4
# 19 "/usr/include/bits/timesize.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 20 "/usr/include/bits/timesize.h" 2 3 4
# 29 "/usr/include/bits/types.h" 2 3 4



# 31 "/usr/include/bits/types.h" 3 4
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 142 "/usr/include/bits/types.h" 2 3 4
# 1 "/usr/include/bits/time64.h" 1 3 4
# 143 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4




# 1 "/usr/include/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 35 "/usr/include/stdint.h" 2 3 4


# 1 "/usr/include/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4



# 1 "/usr/include/bits/stdint-least.h" 1 3 4
# 25 "/usr/include/bits/stdint-least.h" 3 4
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;
# 42 "/usr/include/stdint.h" 2 3 4





typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 60 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 76 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 90 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 10 "/usr/lib/gcc/x86_64-pc-linux-gnu/14.2.1/include/stdint.h" 2 3 4
# 20 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/common.h" 2
# 1 "/usr/include/inttypes.h" 1 3 4
# 34 "/usr/include/inttypes.h" 3 4
typedef int __gwchar_t;
# 327 "/usr/include/inttypes.h" 3 4





typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
# 351 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));
# 415 "/usr/include/inttypes.h" 3 4

# 21 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/common.h" 2
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/14.2.1/include/stdbool.h" 1 3 4
# 22 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/common.h" 2
# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/string.h" 2 3 4






# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/14.2.1/include/stddef.h" 1 3 4
# 214 "/usr/lib/gcc/x86_64-pc-linux-gnu/14.2.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/string.h" 2 3 4
# 43 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
    __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__access__ (__write_only__, 1, 4)));




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 80 "/usr/include/string.h" 3 4
extern int __memcmpeq (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 107 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 141 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
    __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__access__ (__write_only__, 1, 3)));



# 1 "/usr/include/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/bits/types/locale_t.h" 3 4
# 1 "/usr/include/bits/types/__locale_t.h" 1 3 4
# 27 "/usr/include/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 173 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)))
     __attribute__ ((__access__ (__write_only__, 1, 3)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 246 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 273 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 286 "/usr/include/string.h" 3 4
extern char *strchrnul (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 323 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 350 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 380 "/usr/include/string.h" 3 4
extern char *strcasestr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)))
    __attribute__ ((__access__ (__read_only__, 1, 2)))
    __attribute__ ((__access__ (__read_only__, 3, 4)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
# 432 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)))
    __attribute__ ((__access__ (__write_only__, 2, 3)));
# 458 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/14.2.1/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4










extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));



# 463 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)))
    __attribute__ ((__access__ (__write_only__, 1, 2)));



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));
# 489 "/usr/include/string.h" 3 4
extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern size_t strlcpy (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__access__ (__write_only__, 1, 3)));



extern size_t strlcat (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__access__ (__read_write__, 1, 3)));
# 552 "/usr/include/string.h" 3 4

# 23 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/common.h" 2

# 1 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/generated/autoconf.h" 1
# 25 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/common.h" 2
# 1 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/macro.h" 1
# 26 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/common.h" 2




# 1 "/usr/include/assert.h" 1 3 4
# 64 "/usr/include/assert.h" 3 4



extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



# 31 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/common.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 26 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/14.2.1/include/stddef.h" 1 3 4
# 329 "/usr/lib/gcc/x86_64-pc-linux-gnu/14.2.1/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 42 "/usr/include/stdlib.h" 2 3 4
# 56 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/bits/floatn.h" 1 3 4
# 119 "/usr/include/bits/floatn.h" 3 4
# 1 "/usr/include/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/bits/floatn-common.h" 3 4
# 1 "/usr/include/bits/long-double.h" 1 3 4
# 25 "/usr/include/bits/floatn-common.h" 2 3 4
# 120 "/usr/include/bits/floatn.h" 2 3 4
# 57 "/usr/include/stdlib.h" 2 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 98 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;



extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 177 "/usr/include/stdlib.h" 3 4
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 480 "/usr/include/stdlib.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) atoi (const char *__nptr)
{
  return (int) strtol (__nptr, (char **) ((void *)0), 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
__attribute__ ((__nothrow__ , __leaf__)) atol (const char *__nptr)
{
  return strtol (__nptr, (char **) ((void *)0), 10);
}


__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
__attribute__ ((__nothrow__ , __leaf__)) atoll (const char *__nptr)
{
  return strtoll (__nptr, (char **) ((void *)0), 10);
}
# 505 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 27 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;
# 59 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 97 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 127 "/usr/include/sys/types.h" 2 3 4

# 1 "/usr/include/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 129 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/bits/types/time_t.h" 1 3 4
# 10 "/usr/include/bits/types/time_t.h" 3 4
typedef __time_t time_t;
# 130 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 131 "/usr/include/sys/types.h" 2 3 4
# 144 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/14.2.1/include/stddef.h" 1 3 4
# 145 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;







typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;


typedef int register_t __attribute__ ((__mode__ (__word__)));
# 176 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 24 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 35 "/usr/include/bits/endian.h" 3 4
# 1 "/usr/include/bits/endianness.h" 1 3 4
# 36 "/usr/include/bits/endian.h" 2 3 4
# 25 "/usr/include/endian.h" 2 3 4
# 35 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 33 "/usr/include/bits/byteswap.h" 3 4
static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{

  return __builtin_bswap16 (__bsx);



}






static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{

  return __builtin_bswap32 (__bsx);



}
# 69 "/usr/include/bits/byteswap.h" 3 4
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{

  return __builtin_bswap64 (__bsx);



}
# 36 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/bits/uintn-identity.h" 3 4
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 37 "/usr/include/endian.h" 2 3 4
# 177 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/select.h" 1 3 4
# 30 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;
# 34 "/usr/include/sys/select.h" 2 3 4



# 1 "/usr/include/bits/types/struct_timeval.h" 1 3 4







struct timeval
{




  __time_t tv_sec;
  __suseconds_t tv_usec;

};
# 38 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/types/struct_timespec.h" 1 3 4
# 11 "/usr/include/bits/types/struct_timespec.h" 3 4
struct timespec
{



  __time_t tv_sec;




  __syscall_slong_t tv_nsec;
# 31 "/usr/include/bits/types/struct_timespec.h" 3 4
};
# 40 "/usr/include/sys/select.h" 2 3 4



typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 59 "/usr/include/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 91 "/usr/include/sys/select.h" 3 4

# 102 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 127 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 153 "/usr/include/sys/select.h" 3 4

# 180 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 227 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/thread-shared-types.h" 1 3 4
# 44 "/usr/include/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes-arch.h" 1 3 4
# 21 "/usr/include/bits/pthreadtypes-arch.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 22 "/usr/include/bits/pthreadtypes-arch.h" 2 3 4
# 45 "/usr/include/bits/thread-shared-types.h" 2 3 4

# 1 "/usr/include/bits/atomic_wide_counter.h" 1 3 4
# 25 "/usr/include/bits/atomic_wide_counter.h" 3 4
typedef union
{
  __extension__ unsigned long long int __value64;
  struct
  {
    unsigned int __low;
    unsigned int __high;
  } __value32;
} __atomic_wide_counter;
# 47 "/usr/include/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
# 76 "/usr/include/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/bits/struct_mutex.h" 1 3 4
# 22 "/usr/include/bits/struct_mutex.h" 3 4
struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;



  int __kind;

  short __spins;
  short __elision;
  __pthread_list_t __list;
# 53 "/usr/include/bits/struct_mutex.h" 3 4
};
# 77 "/usr/include/bits/thread-shared-types.h" 2 3 4
# 89 "/usr/include/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/bits/struct_rwlock.h" 1 3 4
# 23 "/usr/include/bits/struct_rwlock.h" 3 4
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;


  unsigned int __flags;
# 55 "/usr/include/bits/struct_rwlock.h" 3 4
};
# 90 "/usr/include/bits/thread-shared-types.h" 2 3 4




struct __pthread_cond_s
{
  __atomic_wide_counter __wseq;
  __atomic_wide_counter __g1_start;
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};

typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;

typedef struct
{
  int __data ;
} __once_flag;
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 228 "/usr/include/sys/types.h" 2 3 4



# 515 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));



extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern __uint32_t arc4random (void)
     __attribute__ ((__nothrow__ , __leaf__)) ;


extern void arc4random_buf (void *__buf, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __uint32_t arc4random_uniform (__uint32_t __upper_bound)
     __attribute__ ((__nothrow__ , __leaf__)) ;




extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (1, 2))) ;






extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__alloc_size__ (2)));


extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__alloc_size__ (2, 3)))
    __attribute__ ((__malloc__ (__builtin_free, 1)));


extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__ (reallocarray, 1)));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/14.2.1/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 707 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_align__ (1)))
     __attribute__ ((__alloc_size__ (2))) ;



extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 786 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 814 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 827 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 849 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 870 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 923 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;
# 940 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 960 "/usr/include/stdlib.h" 3 4
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;


# 1 "/usr/include/bits/stdlib-bsearch.h" 1 3 4
# 19 "/usr/include/bits/stdlib-bsearch.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) void *
bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size,
  __compar_fn_t __compar)
{
  size_t __l, __u, __idx;
  const void *__p;
  int __comparison;

  __l = 0;
  __u = __nmemb;
  while (__l < __u)
    {
      __idx = (__l + __u) / 2;
      __p = (const void *) (((const char *) __base) + (__idx * __size));
      __comparison = (*__compar) (__key, __p);
      if (__comparison < 0)
 __u = __idx;
      else if (__comparison > 0)
 __l = __idx + 1;
      else
 {

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"

   return (void *) __p;

#pragma GCC diagnostic pop

 }
    }

  return ((void *)0);
}
# 966 "/usr/include/stdlib.h" 2 3 4




extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 980 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;






extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
# 1012 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));





extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__read_only__, 2)));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 1, 3)))
  __attribute__ ((__access__ (__read_only__, 2)));






extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 1099 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 1145 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1155 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/bits/stdlib-float.h" 1 3 4
# 24 "/usr/include/bits/stdlib-float.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) double
__attribute__ ((__nothrow__ , __leaf__)) atof (const char *__nptr)
{
  return strtod (__nptr, (char **) ((void *)0));
}
# 1156 "/usr/include/stdlib.h" 2 3 4
# 1167 "/usr/include/stdlib.h" 3 4

# 32 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/common.h" 2







# 38 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/common.h"
typedef uint32_t word_t;
typedef int32_t sword_t;


typedef word_t vaddr_t;
typedef uint32_t paddr_t;

typedef uint16_t ioaddr_t;

# 1 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/debug.h" 1
# 19 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/debug.h"
# 1 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/common.h" 1
# 20 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/debug.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 28 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 29 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/14.2.1/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/14.2.1/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-pc-linux-gnu/14.2.1/include/stdarg.h" 3 4

# 40 "/usr/lib/gcc/x86_64-pc-linux-gnu/14.2.1/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 38 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/bits/types/__fpos_t.h" 1 3 4




# 1 "/usr/include/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/bits/types/__fpos_t.h" 2 3 4




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/__fpos64_t.h" 1 3 4
# 10 "/usr/include/bits/types/__fpos64_t.h" 3 4
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 44 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/struct_FILE.h" 1 3 4
# 35 "/usr/include/bits/types/struct_FILE.h" 3 4
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  struct _IO_FILE **_prevchain;
  int _mode;

  char _unused2[15 * sizeof (int) - 5 * sizeof (void *)];
};
# 45 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/bits/types/cookie_io_functions_t.h" 1 3 4
# 27 "/usr/include/bits/types/cookie_io_functions_t.h" 3 4
typedef __ssize_t cookie_read_function_t (void *__cookie, char *__buf,
                                          size_t __nbytes);







typedef __ssize_t cookie_write_function_t (void *__cookie, const char *__buf,
                                           size_t __nbytes);







typedef int cookie_seek_function_t (void *__cookie, __off64_t *__pos, int __w);


typedef int cookie_close_function_t (void *__cookie);






typedef struct _IO_cookie_io_functions_t
{
  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
# 48 "/usr/include/stdio.h" 2 3 4





typedef __gnuc_va_list va_list;
# 85 "/usr/include/stdio.h" 3 4
typedef __fpos_t fpos_t;
# 129 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 130 "/usr/include/stdio.h" 2 3 4
# 149 "/usr/include/stdio.h" 3 4
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));
# 184 "/usr/include/stdio.h" 3 4
extern int fclose (FILE *__stream) __attribute__ ((__nonnull__ (1)));
# 194 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;
# 211 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char[20]) __attribute__ ((__nothrow__ , __leaf__)) ;




extern char *tmpnam_r (char __s[20]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 228 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
   __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (__builtin_free, 1)));






extern int fflush (FILE *__stream);
# 245 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 264 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) __attribute__ ((__nonnull__ (3)));
# 299 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     cookie_io_functions_t __io_funcs) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;
# 334 "/usr/include/stdio.h" 3 4
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__nonnull__ (1)));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...) __attribute__ ((__nonnull__ (1)));




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nonnull__ (1)));




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));





extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) __attribute__ ((__nonnull__ (1)));




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 463 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                                __attribute__ ((__nonnull__ (1)));
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 490 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__nonnull__ (1)));





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 540 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__nonnull__ (1)));
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 575 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream) __attribute__ ((__nonnull__ (1)));
extern int getc (FILE *__stream) __attribute__ ((__nonnull__ (1)));





extern int getchar (void);






extern int getc_unlocked (FILE *__stream) __attribute__ ((__nonnull__ (1)));
extern int getchar_unlocked (void);
# 600 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream) __attribute__ ((__nonnull__ (1)));
# 611 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream) __attribute__ ((__nonnull__ (2)));
extern int putc (int __c, FILE *__stream) __attribute__ ((__nonnull__ (2)));





extern int putchar (int __c);
# 627 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream) __attribute__ ((__nonnull__ (2)));







extern int putc_unlocked (int __c, FILE *__stream) __attribute__ ((__nonnull__ (2)));
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream) __attribute__ ((__nonnull__ (1)));


extern int putw (int __w, FILE *__stream) __attribute__ ((__nonnull__ (2)));







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     __attribute__ ((__access__ (__write_only__, 1, 2))) __attribute__ ((__nonnull__ (3)));
# 689 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) __attribute__ ((__nonnull__ (4)));
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) __attribute__ ((__nonnull__ (4)));


extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) __attribute__ ((__nonnull__ (3)));







extern int fputs (const char *__restrict __s, FILE *__restrict __stream)
  __attribute__ ((__nonnull__ (2)));





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream) __attribute__ ((__nonnull__ (2)));






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream)
  __attribute__ ((__nonnull__ (4)));




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s) __attribute__ ((__nonnull__ (4)));
# 756 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream)
  __attribute__ ((__nonnull__ (4)));
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream)
  __attribute__ ((__nonnull__ (4)));







extern int fseek (FILE *__stream, long int __off, int __whence)
  __attribute__ ((__nonnull__ (1)));




extern long int ftell (FILE *__stream) __attribute__ ((__nonnull__ (1)));




extern void rewind (FILE *__stream) __attribute__ ((__nonnull__ (1)));
# 793 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence)
  __attribute__ ((__nonnull__ (1)));




extern __off_t ftello (FILE *__stream) __attribute__ ((__nonnull__ (1)));
# 819 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos)
  __attribute__ ((__nonnull__ (1)));




extern int fsetpos (FILE *__stream, const fpos_t *__pos) __attribute__ ((__nonnull__ (1)));
# 850 "/usr/include/stdio.h" 3 4
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern void perror (const char *__s) __attribute__ ((__cold__));




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 887 "/usr/include/stdio.h" 3 4
extern int pclose (FILE *__stream) __attribute__ ((__nonnull__ (1)));





extern FILE *popen (const char *__command, const char *__modes)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (pclose, 1))) ;






extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 1)));
# 931 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 949 "/usr/include/stdio.h" 3 4
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
# 966 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio.h" 1 3 4
# 38 "/usr/include/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
vprintf (const char *__restrict __fmt, __gnuc_va_list __arg)
{
  return vfprintf (stdout, __fmt, __arg);
}



extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return getc (stdin);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline __attribute__ ((__gnu_inline__)) int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline __attribute__ ((__gnu_inline__)) int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return putc (__c, stdout);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline __attribute__ ((__gnu_inline__)) int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}
# 127 "/usr/include/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) feof_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x0010) != 0);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) ferror_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x0020) != 0);
}
# 967 "/usr/include/stdio.h" 2 3 4







# 21 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/debug.h" 2
# 1 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/utils.h" 1
# 23 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/utils.h"

# 23 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/utils.h"
enum { NEMU_RUNNING, NEMU_STOP, NEMU_END, NEMU_ABORT, NEMU_QUIT };

typedef struct {
  int state;
  vaddr_t halt_pc;
  uint32_t halt_ret;
} NEMUState;

extern NEMUState nemu_state;



uint64_t get_time();
# 22 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/debug.h" 2
# 47 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/debug.h"
static inline 
# 47 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/debug.h" 3 4
             _Bool 
# 47 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/debug.h"
                  is_err(char *msg) {
    return 
# 48 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/debug.h" 3 4
          ((void *)0) 
# 48 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/debug.h"
               != msg;
}
# 48 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/common.h" 2
# 1 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/type.h" 1
# 10 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/type.h"
typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;




typedef u32 paddr_t;
# 49 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/common.h" 2
# 20 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/cpu.h" 2

void cpu_exec(uint64_t n);

void set_nemu_state(int state, vaddr_t pc, int halt_ret);
void invalid_inst(vaddr_t thispc);
# 17 "src/cpu/cpu-exec.c" 2
# 1 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 1
# 19 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
# 1 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/isa.h" 1
# 20 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/isa.h"
# 1 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/src/isa/riscv32/include/isa-def.h" 1
# 21 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/src/isa/riscv32/include/isa-def.h"
typedef struct {
  vaddr_t mepc;
  word_t mstatus;
  word_t mcause;
  word_t mtvec;
} CSRS;


typedef struct {
  word_t gpr[32];
  vaddr_t pc;
  CSRS csrs;
} riscv32_CPU_state;


typedef struct {
  union {
    uint32_t val;
  } inst;
} riscv32_ISADecodeInfo;
# 21 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/isa.h" 2



typedef riscv32_CPU_state CPU_state;
typedef riscv32_ISADecodeInfo ISADecodeInfo;


extern unsigned char isa_logo[];
void init_isa();
extern const char *regs[32];


extern CPU_state cpu;
void isa_reg_display();
word_t isa_reg_str2val(const char *name, 
# 35 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/isa.h" 3 4
                                        _Bool 
# 35 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/isa.h"
                                             *success);


struct Decode;
int isa_exec_once(struct Decode *s);


enum { MMU_DIRECT, MMU_TRANSLATE, MMU_FAIL };
enum { MEM_TYPE_IFETCH, MEM_TYPE_READ, MEM_TYPE_WRITE };
enum { MEM_RET_OK, MEM_RET_FAIL, MEM_RET_CROSS_PAGE };



paddr_t isa_mmu_translate(vaddr_t vaddr, int len, int type);


vaddr_t isa_raise_intr(word_t NO, vaddr_t epc);

word_t isa_query_intr();



# 56 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/isa.h" 3 4
_Bool 
# 56 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/isa.h"
    isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc);
void isa_difftest_attach();
# 20 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 2

typedef struct Decode {
  vaddr_t pc;
  vaddr_t snpc;
  vaddr_t dnpc;
  ISADecodeInfo isa;
  ;
} Decode;


__attribute__((always_inline))
static inline void pattern_decode(const char *str, int len,
    uint64_t *key, uint64_t *mask, uint64_t *shift) {
  uint64_t __key = 0, __mask = 0, __shift = 0;
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
  if ((0) >= len) goto finish; else { char c = str[0]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((0) + 1) >= len) goto finish; else { char c = str[(0) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((0) + 2) >= len) goto finish; else { char c = str[(0) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 2) + 1) >= len) goto finish; else { char c = str[((0) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((0) + 4) >= len) goto finish; else { char c = str[(0) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 4) + 1) >= len) goto finish; else { char c = str[((0) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 4) + 2) >= len) goto finish; else { char c = str[((0) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 4) + 2) + 1) >= len) goto finish; else { char c = str[(((0) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((0) + 8) >= len) goto finish; else { char c = str[(0) + 8]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 8) + 1) >= len) goto finish; else { char c = str[((0) + 8) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 8) + 2) >= len) goto finish; else { char c = str[((0) + 8) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 8) + 2) + 1) >= len) goto finish; else { char c = str[(((0) + 8) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 8) + 4) >= len) goto finish; else { char c = str[((0) + 8) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 8) + 4) + 1) >= len) goto finish; else { char c = str[(((0) + 8) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 8) + 4) + 2) >= len) goto finish; else { char c = str[(((0) + 8) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 8) + 4) + 2) + 1) >= len) goto finish; else { char c = str[((((0) + 8) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((0) + 16) >= len) goto finish; else { char c = str[(0) + 16]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 16) + 1) >= len) goto finish; else { char c = str[((0) + 16) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 16) + 2) >= len) goto finish; else { char c = str[((0) + 16) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 16) + 2) + 1) >= len) goto finish; else { char c = str[(((0) + 16) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 16) + 4) >= len) goto finish; else { char c = str[((0) + 16) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 16) + 4) + 1) >= len) goto finish; else { char c = str[(((0) + 16) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 16) + 4) + 2) >= len) goto finish; else { char c = str[(((0) + 16) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 16) + 4) + 2) + 1) >= len) goto finish; else { char c = str[((((0) + 16) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 16) + 8) >= len) goto finish; else { char c = str[((0) + 16) + 8]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 16) + 8) + 1) >= len) goto finish; else { char c = str[(((0) + 16) + 8) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 16) + 8) + 2) >= len) goto finish; else { char c = str[(((0) + 16) + 8) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 16) + 8) + 2) + 1) >= len) goto finish; else { char c = str[((((0) + 16) + 8) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 16) + 8) + 4) >= len) goto finish; else { char c = str[(((0) + 16) + 8) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 16) + 8) + 4) + 1) >= len) goto finish; else { char c = str[((((0) + 16) + 8) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 16) + 8) + 4) + 2) >= len) goto finish; else { char c = str[((((0) + 16) + 8) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((((0) + 16) + 8) + 4) + 2) + 1) >= len) goto finish; else { char c = str[(((((0) + 16) + 8) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((0) + 32) >= len) goto finish; else { char c = str[(0) + 32]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 32) + 1) >= len) goto finish; else { char c = str[((0) + 32) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 32) + 2) >= len) goto finish; else { char c = str[((0) + 32) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 2) + 1) >= len) goto finish; else { char c = str[(((0) + 32) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 32) + 4) >= len) goto finish; else { char c = str[((0) + 32) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 4) + 1) >= len) goto finish; else { char c = str[(((0) + 32) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 4) + 2) >= len) goto finish; else { char c = str[(((0) + 32) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 4) + 2) + 1) >= len) goto finish; else { char c = str[((((0) + 32) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 32) + 8) >= len) goto finish; else { char c = str[((0) + 32) + 8]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 8) + 1) >= len) goto finish; else { char c = str[(((0) + 32) + 8) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 8) + 2) >= len) goto finish; else { char c = str[(((0) + 32) + 8) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 8) + 2) + 1) >= len) goto finish; else { char c = str[((((0) + 32) + 8) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 8) + 4) >= len) goto finish; else { char c = str[(((0) + 32) + 8) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 8) + 4) + 1) >= len) goto finish; else { char c = str[((((0) + 32) + 8) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 8) + 4) + 2) >= len) goto finish; else { char c = str[((((0) + 32) + 8) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((((0) + 32) + 8) + 4) + 2) + 1) >= len) goto finish; else { char c = str[(((((0) + 32) + 8) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((0) + 32) + 16) >= len) goto finish; else { char c = str[((0) + 32) + 16]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 16) + 1) >= len) goto finish; else { char c = str[(((0) + 32) + 16) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 16) + 2) >= len) goto finish; else { char c = str[(((0) + 32) + 16) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 16) + 2) + 1) >= len) goto finish; else { char c = str[((((0) + 32) + 16) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 16) + 4) >= len) goto finish; else { char c = str[(((0) + 32) + 16) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 16) + 4) + 1) >= len) goto finish; else { char c = str[((((0) + 32) + 16) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 16) + 4) + 2) >= len) goto finish; else { char c = str[((((0) + 32) + 16) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((((0) + 32) + 16) + 4) + 2) + 1) >= len) goto finish; else { char c = str[(((((0) + 32) + 16) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((0) + 32) + 16) + 8) >= len) goto finish; else { char c = str[(((0) + 32) + 16) + 8]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 16) + 8) + 1) >= len) goto finish; else { char c = str[((((0) + 32) + 16) + 8) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 16) + 8) + 2) >= len) goto finish; else { char c = str[((((0) + 32) + 16) + 8) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((((0) + 32) + 16) + 8) + 2) + 1) >= len) goto finish; else { char c = str[(((((0) + 32) + 16) + 8) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((0) + 32) + 16) + 8) + 4) >= len) goto finish; else { char c = str[((((0) + 32) + 16) + 8) + 4]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((((0) + 32) + 16) + 8) + 4) + 1) >= len) goto finish; else { char c = str[(((((0) + 32) + 16) + 8) + 4) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if (((((((0) + 32) + 16) + 8) + 4) + 2) >= len) goto finish; else { char c = str[(((((0) + 32) + 16) + 8) + 4) + 2]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } }; if ((((((((0) + 32) + 16) + 8) + 4) + 2) + 1) >= len) goto finish; else { char c = str[((((((0) + 32) + 16) + 8) + 4) + 2) + 1]; if (c != ' ') { do { if (!(c == '0' || c == '1' || c == '?')) { (fflush(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 c == '0' || c == '1' || c == '?'
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "c == '0' || c == '1' || c == '?'"
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 53, __extension__ __PRETTY_FUNCTION__); }))
# 53 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 1) | (c == '1' ? 1 : 0); __mask = (__mask << 1) | (c == '?' ? 0 : 1); __shift = (c == '?' ? __shift + 1 : 0); } };
  do { if (!(0)) { (fflush(
# 54 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 54 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 54 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 54 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "pattern too long" "\33[0m" "\n")); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 54 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 54 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 0
# 54 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 54 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 0
# 54 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 54 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "0"
# 54 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 54, __extension__ __PRETTY_FUNCTION__); }))
# 54 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0);

finish:
  *key = __key >> __shift;
  *mask = __mask >> __shift;
  *shift = __shift;
}

__attribute__((always_inline))
static inline void pattern_decode_hex(const char *str, int len,
    uint64_t *key, uint64_t *mask, uint64_t *shift) {
  uint64_t __key = 0, __mask = 0, __shift = 0;
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
  if ((0) >= len) goto finish; else { char c = str[0]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if (((0) + 1) >= len) goto finish; else { char c = str[(0) + 1]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if (((0) + 2) >= len) goto finish; else { char c = str[(0) + 2]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if ((((0) + 2) + 1) >= len) goto finish; else { char c = str[((0) + 2) + 1]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if (((0) + 4) >= len) goto finish; else { char c = str[(0) + 4]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if ((((0) + 4) + 1) >= len) goto finish; else { char c = str[((0) + 4) + 1]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if ((((0) + 4) + 2) >= len) goto finish; else { char c = str[((0) + 4) + 2]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if (((((0) + 4) + 2) + 1) >= len) goto finish; else { char c = str[(((0) + 4) + 2) + 1]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if (((0) + 8) >= len) goto finish; else { char c = str[(0) + 8]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if ((((0) + 8) + 1) >= len) goto finish; else { char c = str[((0) + 8) + 1]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if ((((0) + 8) + 2) >= len) goto finish; else { char c = str[((0) + 8) + 2]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if (((((0) + 8) + 2) + 1) >= len) goto finish; else { char c = str[(((0) + 8) + 2) + 1]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if ((((0) + 8) + 4) >= len) goto finish; else { char c = str[((0) + 8) + 4]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if (((((0) + 8) + 4) + 1) >= len) goto finish; else { char c = str[(((0) + 8) + 4) + 1]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if (((((0) + 8) + 4) + 2) >= len) goto finish; else { char c = str[(((0) + 8) + 4) + 2]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } }; if ((((((0) + 8) + 4) + 2) + 1) >= len) goto finish; else { char c = str[((((0) + 8) + 4) + 2) + 1]; if (c != ' ') { do { if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?')) { (fflush(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "invalid character '%c' in pattern string" "\33[0m" "\n", c)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "(c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?'"
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 79, __extension__ __PRETTY_FUNCTION__); }))
# 79 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0); __key = (__key << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); __shift = (c == '?' ? __shift + 4 : 0); } };
  do { if (!(0)) { (fflush(
# 80 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stdout
# 80 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ), fprintf(
# 80 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 stderr
# 80 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 , "\33[1;31m" "pattern too long" "\33[0m" "\n")); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 80 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ((void) sizeof ((
# 80 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 0
# 80 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ? 1 : 0), __extension__ ({ if (
# 80 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 0
# 80 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 ) ; else __assert_fail (
# 80 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 "0"
# 80 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h" 3 4
 , "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h", 80, __extension__ __PRETTY_FUNCTION__); }))
# 80 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/decode.h"
 ; } } while (0);

finish:
  *key = __key >> __shift;
  *mask = __mask >> __shift;
  *shift = __shift;
}
# 18 "src/cpu/cpu-exec.c" 2
# 1 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h" 1
# 20 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h"
# 1 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/difftest-def.h" 1
# 21 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/difftest-def.h"
# 1 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/generated/autoconf.h" 1
# 22 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/difftest-def.h" 2


enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
# 21 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h" 2
# 30 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h"
static inline void difftest_skip_ref() {}
static inline void difftest_skip_dut(int nr_ref, int nr_dut) {}
static inline void difftest_set_patch(void (*fn)(void *arg), void *arg) {}
static inline void difftest_step(vaddr_t pc, vaddr_t npc) {}
static inline void difftest_detach() {}
static inline void difftest_attach() {}


extern void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, 
# 38 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h" 3 4
                                                                     _Bool 
# 38 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h"
                                                                          direction);
extern void (*ref_difftest_regcpy)(void *dut, 
# 39 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h" 3 4
                                             _Bool 
# 39 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h"
                                                  direction);
extern void (*ref_difftest_exec)(uint64_t n);
extern void (*ref_difftest_raise_intr)(uint64_t NO);

static inline 
# 43 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h" 3 4
             _Bool 
# 43 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h"
                  difftest_check_reg(const char *name, vaddr_t pc, word_t ref, word_t dut) {
  if (ref != dut) {
    do { printf("\33[1;34m" "[%s:%d %s] " "%s is different after executing instruction at pc = " "0x%08" 
# 45 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h" 3 4
   "x" 
# 45 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h"
   ", right = " "0x%08" 
# 45 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h" 3 4
   "x" 
# 45 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h"
   ", wrong = " "0x%08" 
# 45 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h" 3 4
   "x" 
# 45 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h"
   ", diff = " "0x%08" 
# 45 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h" 3 4
   "x" 
# 45 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h"
   "\33[0m" "\n", "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h", 45, __func__, name, pc, ref, dut, ref ^ dut); do { extern FILE* log_fp; extern 
# 45 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h" 3 4
   _Bool 
# 45 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h"
   log_enable(); if (log_enable() && log_fp != 
# 45 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h" 3 4
   ((void *)0)
# 45 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h"
   ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "%s is different after executing instruction at pc = " "0x%08" 
# 45 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h" 3 4
   "x" 
# 45 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h"
   ", right = " "0x%08" 
# 45 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h" 3 4
   "x" 
# 45 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h"
   ", wrong = " "0x%08" 
# 45 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h" 3 4
   "x" 
# 45 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h"
   ", diff = " "0x%08" 
# 45 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h" 3 4
   "x" 
# 45 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h"
   "\33[0m" "\n", "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h", 45, __func__, name, pc, ref, dut, ref ^ dut); fflush(log_fp); } } while (0); } while (0)

                                      ;
    return 
# 48 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h" 3 4
          0
# 48 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h"
               ;
  }
  return 
# 50 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h" 3 4
        1
# 50 "/home/rongzi/.Lectures/term3/计算机系统基础/ProgrammingAssaignment/ics2024/nemu/include/cpu/difftest.h"
            ;
}
# 19 "src/cpu/cpu-exec.c" 2
# 1 "/usr/include/locale.h" 1 3 4
# 28 "/usr/include/locale.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-linux-gnu/14.2.1/include/stddef.h" 1 3 4
# 29 "/usr/include/locale.h" 2 3 4
# 1 "/usr/include/bits/locale.h" 1 3 4
# 30 "/usr/include/locale.h" 2 3 4


# 51 "/usr/include/locale.h" 3 4

# 51 "/usr/include/locale.h" 3 4
struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
# 118 "/usr/include/locale.h" 3 4
};



extern char *setlocale (int __category, const char *__locale) __attribute__ ((__nothrow__ , __leaf__));


extern struct lconv *localeconv (void) __attribute__ ((__nothrow__ , __leaf__));
# 141 "/usr/include/locale.h" 3 4
extern locale_t newlocale (int __category_mask, const char *__locale,
      locale_t __base) __attribute__ ((__nothrow__ , __leaf__));
# 176 "/usr/include/locale.h" 3 4
extern locale_t duplocale (locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));



extern void freelocale (locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));






extern locale_t uselocale (locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));








# 20 "src/cpu/cpu-exec.c" 2
# 28 "src/cpu/cpu-exec.c"

# 28 "src/cpu/cpu-exec.c"
CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0;
static 
# 31 "src/cpu/cpu-exec.c" 3 4
      _Bool 
# 31 "src/cpu/cpu-exec.c"
           g_print_step = 
# 31 "src/cpu/cpu-exec.c" 3 4
                          0
# 31 "src/cpu/cpu-exec.c"
                               ;


# 33 "src/cpu/cpu-exec.c" 3 4
_Bool 
# 33 "src/cpu/cpu-exec.c"
    check_watchpoint();
void device_update();
static inline void out_disassem_inst(Decode *, u32, u32, int);

static struct {
    int mod;
    int front;
    int rear;
    u32 insts[20];
    u32 addrs[20];
} ringbuf = { .mod = 20, .front = 0, .rear = -1, .insts = {}, .addrs = {} };

static inline void itrace_print(Decode *_this) {
    if ( nemu_state.halt_ret != 0 && ringbuf.rear != -1 )

    {
        int i = ringbuf.rear;
        for ( ; i != ringbuf.front; i = (i + 1) % ringbuf.mod )
        {
            out_disassem_inst(_this, ringbuf.insts[i], ringbuf.addrs[i], 0);




        }
    }
}

enum SYSCALL{
    EXIT = 0, YIELD, OPEN, READ, WRITE, KILL, GETPID, CLOSE, LSEEK,
    BRK, FSTAT, TIME, SIGNAL, EXECVE, FORK, LINK, UNLINK, WAIT, TIMES, GETTIMEOFDAY
};
# 74 "src/cpu/cpu-exec.c"
void cause_to_descr(word_t cause, char *descr, char *event) {
    switch (cause) {
        case -1: { strcpy(descr, "YIELD"); strcpy(event, "EVENT_YIELD"); break; }
        case EXIT: { strcpy(descr, "EXIT"); strcpy(event, "EVENT_EXIT"); break; }
        case YIELD: { strcpy(descr, "YIELD"); strcpy(event, "EVENT_YIELD"); break; }
        case OPEN: { strcpy(descr, "OPEN"); strcpy(event, "EVENT_OPEN"); break; }
        case READ: { strcpy(descr, "READ"); strcpy(event, "EVENT_READ"); break; }
        case WRITE: { strcpy(descr, "WRITE"); strcpy(event, "EVENT_WRITE"); break; }
        case KILL: { strcpy(descr, "KILL"); strcpy(event, "EVENT_KILL"); break; }
        case GETPID: { strcpy(descr, "GETPID"); strcpy(event, "EVENT_GETPID"); break; }
        case CLOSE: { strcpy(descr, "CLOSE"); strcpy(event, "EVENT_CLOSE"); break; }
        case LSEEK: { strcpy(descr, "LSEEK"); strcpy(event, "EVENT_LSEEK"); break; }
        case BRK: { strcpy(descr, "BRK"); strcpy(event, "EVENT_BRK"); break; }
        case FSTAT: { strcpy(descr, "FSTAT"); strcpy(event, "EVENT_FSTAT"); break; }
        case TIME: { strcpy(descr, "TIME"); strcpy(event, "EVENT_TIME"); break; }
        case SIGNAL: { strcpy(descr, "SIGNAL"); strcpy(event, "EVENT_SIGNAL"); break; }
        case EXECVE: { strcpy(descr, "EXECVE"); strcpy(event, "EVENT_EXECVE"); break; }
        case FORK: { strcpy(descr, "FORK"); strcpy(event, "EVENT_FORK"); break; }
        case LINK: { strcpy(descr, "LINK"); strcpy(event, "EVENT_LINK"); break; }
        case UNLINK: { strcpy(descr, "UNLINK"); strcpy(event, "EVENT_UNLINK"); break; }
        case WAIT: { strcpy(descr, "WAIT"); strcpy(event, "EVENT_WAIT"); break; }
        case TIMES: { strcpy(descr, "TIMES"); strcpy(event, "EVENT_TIMES"); break; }
        case GETTIMEOFDAY: { strcpy(descr, "GETTIMEOFDAY"); strcpy(event, "EVENT_GETTIMEOFDAY"); break; }
        default:
            strcpy(descr, "unkown trigger");
            strcpy(event, "unkown event");
            break;
    }
}

static inline void last_inst(Decode *_this) {
    int i = ringbuf.rear;
    for ( ; i != ringbuf.front; i = (i + 1) % ringbuf.mod )
    {
        out_disassem_inst(_this, ringbuf.insts[i], ringbuf.addrs[i], 0);



    }
}
static inline void etrace(Decode *_this) {
    if ( cpu.pc != cpu.csrs.mtvec ) return;

    char description[16], event[16];
    cause_to_descr(cpu.csrs.mcause, description, event);
    do { printf("\33[1;34m" "[%s:%d %s] " "Trigger: %s event: %s mcause: 0x%x at ""0x%08" 
# 119 "src/cpu/cpu-exec.c" 3 4
   "x" 
# 119 "src/cpu/cpu-exec.c"
   "\33[0m" "\n", "src/cpu/cpu-exec.c", 119, __func__, description, event, cpu.csrs.mcause, cpu.pc); do { extern FILE* log_fp; extern 
# 119 "src/cpu/cpu-exec.c" 3 4
   _Bool 
# 119 "src/cpu/cpu-exec.c"
   log_enable(); if (log_enable() && log_fp != 
# 119 "src/cpu/cpu-exec.c" 3 4
   ((void *)0)
# 119 "src/cpu/cpu-exec.c"
   ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "Trigger: %s event: %s mcause: 0x%x at ""0x%08" 
# 119 "src/cpu/cpu-exec.c" 3 4
   "x" 
# 119 "src/cpu/cpu-exec.c"
   "\33[0m" "\n", "src/cpu/cpu-exec.c", 119, __func__, description, event, cpu.csrs.mcause, cpu.pc); fflush(log_fp); } } while (0); } while (0);
    last_inst(_this);
}

static inline void strace(Decode *_this) {
    if ( cpu.pc != cpu.csrs.mtvec ) return;





    last_inst(_this);
    switch (cpu.csrs.mcause) {
        case EXIT: { do { printf("\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 132, __func__,"EXIT"); do { extern FILE* log_fp; extern 
# 132 "src/cpu/cpu-exec.c" 3 4
       _Bool 
# 132 "src/cpu/cpu-exec.c"
       log_enable(); if (log_enable() && log_fp != 
# 132 "src/cpu/cpu-exec.c" 3 4
       ((void *)0)
# 132 "src/cpu/cpu-exec.c"
       ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 132, __func__,"EXIT"); fflush(log_fp); } } while (0); } while (0); break; };
        case YIELD: { do { printf("\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 133, __func__,"YIELD"); do { extern FILE* log_fp; extern 
# 133 "src/cpu/cpu-exec.c" 3 4
       _Bool 
# 133 "src/cpu/cpu-exec.c"
       log_enable(); if (log_enable() && log_fp != 
# 133 "src/cpu/cpu-exec.c" 3 4
       ((void *)0)
# 133 "src/cpu/cpu-exec.c"
       ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 133, __func__,"YIELD"); fflush(log_fp); } } while (0); } while (0); break; };
        case OPEN: { do { printf("\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 134, __func__,"OPEN"); do { extern FILE* log_fp; extern 
# 134 "src/cpu/cpu-exec.c" 3 4
       _Bool 
# 134 "src/cpu/cpu-exec.c"
       log_enable(); if (log_enable() && log_fp != 
# 134 "src/cpu/cpu-exec.c" 3 4
       ((void *)0)
# 134 "src/cpu/cpu-exec.c"
       ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 134, __func__,"OPEN"); fflush(log_fp); } } while (0); } while (0); break; };
        case READ: { do { printf("\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 135, __func__,"READ"); do { extern FILE* log_fp; extern 
# 135 "src/cpu/cpu-exec.c" 3 4
       _Bool 
# 135 "src/cpu/cpu-exec.c"
       log_enable(); if (log_enable() && log_fp != 
# 135 "src/cpu/cpu-exec.c" 3 4
       ((void *)0)
# 135 "src/cpu/cpu-exec.c"
       ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 135, __func__,"READ"); fflush(log_fp); } } while (0); } while (0); break; }
        case WRITE: { do { printf("\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 136, __func__,"WRITE"); do { extern FILE* log_fp; extern 
# 136 "src/cpu/cpu-exec.c" 3 4
       _Bool 
# 136 "src/cpu/cpu-exec.c"
       log_enable(); if (log_enable() && log_fp != 
# 136 "src/cpu/cpu-exec.c" 3 4
       ((void *)0)
# 136 "src/cpu/cpu-exec.c"
       ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 136, __func__,"WRITE"); fflush(log_fp); } } while (0); } while (0); break; };
        case KILL: { do { printf("\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 137, __func__,"KILL"); do { extern FILE* log_fp; extern 
# 137 "src/cpu/cpu-exec.c" 3 4
       _Bool 
# 137 "src/cpu/cpu-exec.c"
       log_enable(); if (log_enable() && log_fp != 
# 137 "src/cpu/cpu-exec.c" 3 4
       ((void *)0)
# 137 "src/cpu/cpu-exec.c"
       ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 137, __func__,"KILL"); fflush(log_fp); } } while (0); } while (0); break; };
        case GETPID: { do { printf("\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 138, __func__,"GETPID"); do { extern FILE* log_fp; extern 
# 138 "src/cpu/cpu-exec.c" 3 4
       _Bool 
# 138 "src/cpu/cpu-exec.c"
       log_enable(); if (log_enable() && log_fp != 
# 138 "src/cpu/cpu-exec.c" 3 4
       ((void *)0)
# 138 "src/cpu/cpu-exec.c"
       ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 138, __func__,"GETPID"); fflush(log_fp); } } while (0); } while (0); break; };
        case CLOSE: { do { printf("\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 139, __func__,"CLOSE"); do { extern FILE* log_fp; extern 
# 139 "src/cpu/cpu-exec.c" 3 4
       _Bool 
# 139 "src/cpu/cpu-exec.c"
       log_enable(); if (log_enable() && log_fp != 
# 139 "src/cpu/cpu-exec.c" 3 4
       ((void *)0)
# 139 "src/cpu/cpu-exec.c"
       ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 139, __func__,"CLOSE"); fflush(log_fp); } } while (0); } while (0); break; };
        case LSEEK: { do { printf("\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 140, __func__,"LSEEK"); do { extern FILE* log_fp; extern 
# 140 "src/cpu/cpu-exec.c" 3 4
       _Bool 
# 140 "src/cpu/cpu-exec.c"
       log_enable(); if (log_enable() && log_fp != 
# 140 "src/cpu/cpu-exec.c" 3 4
       ((void *)0)
# 140 "src/cpu/cpu-exec.c"
       ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 140, __func__,"LSEEK"); fflush(log_fp); } } while (0); } while (0); break; };
        case BRK: { do { printf("\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 141, __func__,"BRK"); do { extern FILE* log_fp; extern 
# 141 "src/cpu/cpu-exec.c" 3 4
       _Bool 
# 141 "src/cpu/cpu-exec.c"
       log_enable(); if (log_enable() && log_fp != 
# 141 "src/cpu/cpu-exec.c" 3 4
       ((void *)0)
# 141 "src/cpu/cpu-exec.c"
       ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 141, __func__,"BRK"); fflush(log_fp); } } while (0); } while (0); break; };
        case FSTAT: { do { printf("\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 142, __func__,"FSTAT"); do { extern FILE* log_fp; extern 
# 142 "src/cpu/cpu-exec.c" 3 4
       _Bool 
# 142 "src/cpu/cpu-exec.c"
       log_enable(); if (log_enable() && log_fp != 
# 142 "src/cpu/cpu-exec.c" 3 4
       ((void *)0)
# 142 "src/cpu/cpu-exec.c"
       ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 142, __func__,"FSTAT"); fflush(log_fp); } } while (0); } while (0); break; };
        case TIME: { do { printf("\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 143, __func__,"TIME"); do { extern FILE* log_fp; extern 
# 143 "src/cpu/cpu-exec.c" 3 4
       _Bool 
# 143 "src/cpu/cpu-exec.c"
       log_enable(); if (log_enable() && log_fp != 
# 143 "src/cpu/cpu-exec.c" 3 4
       ((void *)0)
# 143 "src/cpu/cpu-exec.c"
       ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 143, __func__,"TIME"); fflush(log_fp); } } while (0); } while (0); break; };
        case SIGNAL: { do { printf("\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 144, __func__,"SIGNAL"); do { extern FILE* log_fp; extern 
# 144 "src/cpu/cpu-exec.c" 3 4
       _Bool 
# 144 "src/cpu/cpu-exec.c"
       log_enable(); if (log_enable() && log_fp != 
# 144 "src/cpu/cpu-exec.c" 3 4
       ((void *)0)
# 144 "src/cpu/cpu-exec.c"
       ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 144, __func__,"SIGNAL"); fflush(log_fp); } } while (0); } while (0); break; }
        case EXECVE: { do { printf("\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 145, __func__,"EXECVE"); do { extern FILE* log_fp; extern 
# 145 "src/cpu/cpu-exec.c" 3 4
       _Bool 
# 145 "src/cpu/cpu-exec.c"
       log_enable(); if (log_enable() && log_fp != 
# 145 "src/cpu/cpu-exec.c" 3 4
       ((void *)0)
# 145 "src/cpu/cpu-exec.c"
       ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 145, __func__,"EXECVE"); fflush(log_fp); } } while (0); } while (0); break; };
        case FORK: { do { printf("\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 146, __func__,"FORK"); do { extern FILE* log_fp; extern 
# 146 "src/cpu/cpu-exec.c" 3 4
       _Bool 
# 146 "src/cpu/cpu-exec.c"
       log_enable(); if (log_enable() && log_fp != 
# 146 "src/cpu/cpu-exec.c" 3 4
       ((void *)0)
# 146 "src/cpu/cpu-exec.c"
       ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 146, __func__,"FORK"); fflush(log_fp); } } while (0); } while (0); break; };
        case LINK: { do { printf("\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 147, __func__,"LINK"); do { extern FILE* log_fp; extern 
# 147 "src/cpu/cpu-exec.c" 3 4
       _Bool 
# 147 "src/cpu/cpu-exec.c"
       log_enable(); if (log_enable() && log_fp != 
# 147 "src/cpu/cpu-exec.c" 3 4
       ((void *)0)
# 147 "src/cpu/cpu-exec.c"
       ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 147, __func__,"LINK"); fflush(log_fp); } } while (0); } while (0); break; };
        case UNLINK: { do { printf("\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 148, __func__,"UNLINK"); do { extern FILE* log_fp; extern 
# 148 "src/cpu/cpu-exec.c" 3 4
       _Bool 
# 148 "src/cpu/cpu-exec.c"
       log_enable(); if (log_enable() && log_fp != 
# 148 "src/cpu/cpu-exec.c" 3 4
       ((void *)0)
# 148 "src/cpu/cpu-exec.c"
       ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 148, __func__,"UNLINK"); fflush(log_fp); } } while (0); } while (0); break; };
        case WAIT: { do { printf("\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 149, __func__,"WAIT"); do { extern FILE* log_fp; extern 
# 149 "src/cpu/cpu-exec.c" 3 4
       _Bool 
# 149 "src/cpu/cpu-exec.c"
       log_enable(); if (log_enable() && log_fp != 
# 149 "src/cpu/cpu-exec.c" 3 4
       ((void *)0)
# 149 "src/cpu/cpu-exec.c"
       ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 149, __func__,"WAIT"); fflush(log_fp); } } while (0); } while (0); break; };
        case TIMES: { do { printf("\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 150, __func__,"TIMES"); do { extern FILE* log_fp; extern 
# 150 "src/cpu/cpu-exec.c" 3 4
       _Bool 
# 150 "src/cpu/cpu-exec.c"
       log_enable(); if (log_enable() && log_fp != 
# 150 "src/cpu/cpu-exec.c" 3 4
       ((void *)0)
# 150 "src/cpu/cpu-exec.c"
       ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 150, __func__,"TIMES"); fflush(log_fp); } } while (0); } while (0); break; };
        case GETTIMEOFDAY: { do { printf("\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 151, __func__,"GETTIMEOFDAY"); do { extern FILE* log_fp; extern 
# 151 "src/cpu/cpu-exec.c" 3 4
       _Bool 
# 151 "src/cpu/cpu-exec.c"
       log_enable(); if (log_enable() && log_fp != 
# 151 "src/cpu/cpu-exec.c" 3 4
       ((void *)0)
# 151 "src/cpu/cpu-exec.c"
       ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 151, __func__,"GETTIMEOFDAY"); fflush(log_fp); } } while (0); } while (0); break; };
        case -1: { do { printf("\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 152, __func__,"-1"); do { extern FILE* log_fp; extern 
# 152 "src/cpu/cpu-exec.c" 3 4
       _Bool 
# 152 "src/cpu/cpu-exec.c"
       log_enable(); if (log_enable() && log_fp != 
# 152 "src/cpu/cpu-exec.c" 3 4
       ((void *)0)
# 152 "src/cpu/cpu-exec.c"
       ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "syscall: %s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 152, __func__,"-1"); fflush(log_fp); } } while (0); } while (0); break; };
            break;
        default:
            do { if (!(0)) { (fflush(
# 155 "src/cpu/cpu-exec.c" 3 4
           stdout
# 155 "src/cpu/cpu-exec.c"
           ), fprintf(
# 155 "src/cpu/cpu-exec.c" 3 4
           stderr
# 155 "src/cpu/cpu-exec.c"
           , "\33[1;31m" "unkown syscall: %x" "\33[0m" "\n", cpu.csrs.mcause)); extern FILE* log_fp; fflush(log_fp); extern void assert_fail_msg(); assert_fail_msg(); 
# 155 "src/cpu/cpu-exec.c" 3 4
           ((void) sizeof ((
# 155 "src/cpu/cpu-exec.c"
           0
# 155 "src/cpu/cpu-exec.c" 3 4
           ) ? 1 : 0), __extension__ ({ if (
# 155 "src/cpu/cpu-exec.c"
           0
# 155 "src/cpu/cpu-exec.c" 3 4
           ) ; else __assert_fail (
# 155 "src/cpu/cpu-exec.c"
           "0"
# 155 "src/cpu/cpu-exec.c" 3 4
           , "src/cpu/cpu-exec.c", 155, __extension__ __PRETTY_FUNCTION__); }))
# 155 "src/cpu/cpu-exec.c"
           ; } } while (0);
            break;
    }
}

static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {




    ;
    ;
    ;
    ;
    check_watchpoint();

}
# 187 "src/cpu/cpu-exec.c"
static inline void out_disassem_inst(Decode *s, u32 bincode, u32 addr, int is_target) {
# 216 "src/cpu/cpu-exec.c"
}

static void exec_once(Decode *s, vaddr_t pc) {
    s->pc = pc;
    s->snpc = pc;
    isa_exec_once(s);
    cpu.pc = s->dnpc;
# 245 "src/cpu/cpu-exec.c"
    do { ringbuf.insts[ringbuf.front] = (s->isa.inst.val); ringbuf.addrs[ringbuf.front] = (s->pc); do { ringbuf.front = (ringbuf.front + 1) % ringbuf.mod; if ( ringbuf.rear == -1 || ringbuf.front == ringbuf.rear ) { ringbuf.rear = (ringbuf.rear + 1) % ringbuf.mod; } } while (0); } while ( 0 );
}

static void execute(uint64_t n) {
    Decode s;
    for (;n > 0; n --) {
        exec_once(&s, cpu.pc);
        g_nr_guest_inst ++;
        trace_and_difftest(&s, cpu.pc);
        if (nemu_state.state != NEMU_RUNNING) break;
        device_update();
    }
}

static void statistic() {
    setlocale(
# 260 "src/cpu/cpu-exec.c" 3 4
   1
# 260 "src/cpu/cpu-exec.c"
   , "");

    do { printf("\33[1;34m" "[%s:%d %s] " "host time spent = " "%'" 
# 262 "src/cpu/cpu-exec.c" 3 4
   "l" "u" 
# 262 "src/cpu/cpu-exec.c"
   " us" "\33[0m" "\n", "src/cpu/cpu-exec.c", 262, __func__, g_timer); do { extern FILE* log_fp; extern 
# 262 "src/cpu/cpu-exec.c" 3 4
   _Bool 
# 262 "src/cpu/cpu-exec.c"
   log_enable(); if (log_enable() && log_fp != 
# 262 "src/cpu/cpu-exec.c" 3 4
   ((void *)0)
# 262 "src/cpu/cpu-exec.c"
   ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "host time spent = " "%'" 
# 262 "src/cpu/cpu-exec.c" 3 4
   "l" "u" 
# 262 "src/cpu/cpu-exec.c"
   " us" "\33[0m" "\n", "src/cpu/cpu-exec.c", 262, __func__, g_timer); fflush(log_fp); } } while (0); } while (0);
    do { printf("\33[1;34m" "[%s:%d %s] " "total guest instructions = " "%'" 
# 263 "src/cpu/cpu-exec.c" 3 4
   "l" "u" 
# 263 "src/cpu/cpu-exec.c"
   "\33[0m" "\n", "src/cpu/cpu-exec.c", 263, __func__, g_nr_guest_inst); do { extern FILE* log_fp; extern 
# 263 "src/cpu/cpu-exec.c" 3 4
   _Bool 
# 263 "src/cpu/cpu-exec.c"
   log_enable(); if (log_enable() && log_fp != 
# 263 "src/cpu/cpu-exec.c" 3 4
   ((void *)0)
# 263 "src/cpu/cpu-exec.c"
   ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "total guest instructions = " "%'" 
# 263 "src/cpu/cpu-exec.c" 3 4
   "l" "u" 
# 263 "src/cpu/cpu-exec.c"
   "\33[0m" "\n", "src/cpu/cpu-exec.c", 263, __func__, g_nr_guest_inst); fflush(log_fp); } } while (0); } while (0);
    if (g_timer > 0) do { printf("\33[1;34m" "[%s:%d %s] " "simulation frequency = " "%'" 
# 264 "src/cpu/cpu-exec.c" 3 4
                    "l" "u" 
# 264 "src/cpu/cpu-exec.c"
                    " inst/s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 264, __func__, g_nr_guest_inst * 1000000 / g_timer); do { extern FILE* log_fp; extern 
# 264 "src/cpu/cpu-exec.c" 3 4
                    _Bool 
# 264 "src/cpu/cpu-exec.c"
                    log_enable(); if (log_enable() && log_fp != 
# 264 "src/cpu/cpu-exec.c" 3 4
                    ((void *)0)
# 264 "src/cpu/cpu-exec.c"
                    ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "simulation frequency = " "%'" 
# 264 "src/cpu/cpu-exec.c" 3 4
                    "l" "u" 
# 264 "src/cpu/cpu-exec.c"
                    " inst/s" "\33[0m" "\n", "src/cpu/cpu-exec.c", 264, __func__, g_nr_guest_inst * 1000000 / g_timer); fflush(log_fp); } } while (0); } while (0);
    else do { printf("\33[1;34m" "[%s:%d %s] " "Finish running in less than 1 us and can not calculate the simulation frequency" "\33[0m" "\n", "src/cpu/cpu-exec.c", 265, __func__); do { extern FILE* log_fp; extern 
# 265 "src/cpu/cpu-exec.c" 3 4
        _Bool 
# 265 "src/cpu/cpu-exec.c"
        log_enable(); if (log_enable() && log_fp != 
# 265 "src/cpu/cpu-exec.c" 3 4
        ((void *)0)
# 265 "src/cpu/cpu-exec.c"
        ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "Finish running in less than 1 us and can not calculate the simulation frequency" "\33[0m" "\n", "src/cpu/cpu-exec.c", 265, __func__); fflush(log_fp); } } while (0); } while (0);
}

void assert_fail_msg() {
    isa_reg_display();
    statistic();
}


void cpu_exec(uint64_t n) {
    g_print_step = n <= (10);
    switch (nemu_state.state) {
        case NEMU_END: case NEMU_ABORT: case NEMU_QUIT:
            printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
            return;
        default: nemu_state.state = NEMU_RUNNING;
    }

    uint64_t timer_start = get_time();

    execute(n);

    uint64_t timer_end = get_time();
    g_timer += timer_end - timer_start;

    switch (nemu_state.state) {
        case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

        case NEMU_END:
        case NEMU_ABORT:
            do { printf("\33[1;34m" "[%s:%d %s] " "nemu: %s at pc = " "0x%08" 
# 295 "src/cpu/cpu-exec.c" 3 4
           "x" 
# 295 "src/cpu/cpu-exec.c"
           "\33[0m" "\n", "src/cpu/cpu-exec.c", 295, __func__, (nemu_state.state == NEMU_ABORT ? "\33[1;31m" "ABORT" "\33[0m" : (nemu_state.halt_ret == 0 ? "\33[1;32m" "HIT GOOD TRAP" "\33[0m" : "\33[1;31m" "HIT BAD TRAP" "\33[0m")), nemu_state.halt_pc); do { extern FILE* log_fp; extern 
# 295 "src/cpu/cpu-exec.c" 3 4
           _Bool 
# 295 "src/cpu/cpu-exec.c"
           log_enable(); if (log_enable() && log_fp != 
# 295 "src/cpu/cpu-exec.c" 3 4
           ((void *)0)
# 295 "src/cpu/cpu-exec.c"
           ) { fprintf(log_fp, "\33[1;34m" "[%s:%d %s] " "nemu: %s at pc = " "0x%08" 
# 295 "src/cpu/cpu-exec.c" 3 4
           "x" 
# 295 "src/cpu/cpu-exec.c"
           "\33[0m" "\n", "src/cpu/cpu-exec.c", 295, __func__, (nemu_state.state == NEMU_ABORT ? "\33[1;31m" "ABORT" "\33[0m" : (nemu_state.halt_ret == 0 ? "\33[1;32m" "HIT GOOD TRAP" "\33[0m" : "\33[1;31m" "HIT BAD TRAP" "\33[0m")), nemu_state.halt_pc); fflush(log_fp); } } while (0); } while (0)



                                      ;

        case NEMU_QUIT:
           statistic();
    }
}
