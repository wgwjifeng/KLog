/*
 @ 0xCCCCCCCC
*/

#if defined(_MSC_VER)
#pragma once
#endif

#ifndef KLOG_BASIC_TYPES_H_
#define KLOG_BASIC_TYPES_H_

#include <functional>
#include <string>

#include "klog/basic_macros.h"

namespace klog {

#if defined(OS_WIN)
using PathChar = wchar_t;
using PathString = std::wstring;
#define PATH_LITERAL(str) L##str
#else
using PathChar = char;
using PathString = std::string;
#define PATH_LITERAL(str) str
#endif

using FileNameGenerator = std::function<PathString()>;

}   // namespace klog

#endif  // KLOG_BASIC_TYPES_H_