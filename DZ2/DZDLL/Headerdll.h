#pragma once

#include <string>

#ifdef GOOD_EXPORTS
#define GOOD_API __declspec(dllexport)
#else
#define GOOD_API __declspec(dllimport)
#endif

class  Leaver {
public:
	GOOD_API static std::string leave(const std::string& name);
};
