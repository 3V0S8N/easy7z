#define MY_VER_MAJOR 19
#define MY_VER_MINOR 00
#define MY_VER_BUILD 0
#define MY_VERSION_NUMBERS "19.00"
#define MY_VERSION MY_VERSION_NUMBERS

#ifdef MY_X64
  #define MY_7ZIP_NAME "7-Zip [64-bit]"
#else
  #define MY_7ZIP_NAME "7-Zip [32-bit]"
#endif

#ifdef MY_CPU_NAME
  #define MY_VERSION_CPU MY_VERSION " (" MY_CPU_NAME ")"
#else
  #define MY_VERSION_CPU MY_VERSION
#endif

#define MY_DATE "2019-02-21"
#undef MY_COPYRIGHT
#undef MY_VERSION_COPYRIGHT_DATE
#define MY_AUTHOR_NAME "Igor Pavlov"
#define MY_COPYRIGHT_PD "Igor Pavlov : Public domain"
#define MY_COPYRIGHT_CR "Copyright (c) 1999-2018 Igor Pavlov"

#ifdef USE_COPYRIGHT_CR
  #define MY_COPYRIGHT MY_COPYRIGHT_CR
#else
  #define MY_COPYRIGHT MY_COPYRIGHT_PD
#endif

#define MY_COPYRIGHT_DATE MY_COPYRIGHT " : " MY_DATE
#define MY_VERSION_COPYRIGHT_DATE MY_VERSION_CPU " : " MY_COPYRIGHT " : " MY_DATE

#define MY_EASY7ZIP_VER_MAJOR 0
#define MY_EASY7ZIP_VER_MINOR 1

#ifdef MY_X64
  #define MY_EASY7ZIP_7ZIP "Easy 7-Zip [64-bit]"
#else
  #define MY_EASY7ZIP_7ZIP "Easy 7-Zip [32-bit]"
#endif

#define MY_EASY7ZIP_VERSION "0.1.7"

#ifdef MY_X64
  #define MY_EASY7ZIP_7ZIP_VERSION "Easy 7-Zip v0.1.7 [64-bit]"
#else
  #define MY_EASY7ZIP_7ZIP_VERSION "Easy 7-Zip v0.1.7 [32-bit]"
#endif
#define MY_EASY7ZIP_COPYRIGHT "Portions Copyright (C) 2013-2016 James Hoo, (C) 2019 5e5"

#define MY_EASY7ZIP_AUTHOR "James Hoo"
#define MY_EASY7ZIP_HOMEPAGE "e7z.org"
#define MY_EASY7ZIP_SPECIAL_BUILD MY_EASY7ZIP_7ZIP_VERSION " (www." MY_EASY7ZIP_HOMEPAGE ") made by " MY_EASY7ZIP_AUTHOR
