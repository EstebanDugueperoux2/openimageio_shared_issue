#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define OPENIMAGEIO_SHARED_ISSUE_EXPORT __declspec(dllexport)
#else
  #define OPENIMAGEIO_SHARED_ISSUE_EXPORT
#endif

OPENIMAGEIO_SHARED_ISSUE_EXPORT void openimageio_shared_issue();
OPENIMAGEIO_SHARED_ISSUE_EXPORT void openimageio_shared_issue_print_vector(const std::vector<std::string> &strings);
