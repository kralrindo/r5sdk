#ifndef SDKDEFS_H
#define SDKDEFS_H

// Common type declarations to reduce code verbosity.
using std::pair;
using std::regex;
using std::string;
using std::wstring;
using std::u16string;
using std::u32string;
using std::vector;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::stringstream;
using std::ostringstream;
using std::unordered_map;

typedef DWORD ThreadId_t;
typedef const unsigned char* rsig_t;

#ifndef SSIZE_MAX
#ifdef _WIN64
#define SSIZE_MAX 9223372036854775807i64
#define SSIZE_MIN (-9223372036854775807i64 - 1)
#else
#define SSIZE_MAX 2147483647
#define SSIZE_MIN (-2147483647 - 1)
#endif
#endif

// unsigned size types
#ifndef SIZE_MAX
#define SIZE_MAX ((size_t) -1)
#endif

#endif // SDKDEFS_H
