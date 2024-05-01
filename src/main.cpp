#include "openimageio_shared_issue.h"
#include <vector>
#include <string>

int main() {
    openimageio_shared_issue();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    openimageio_shared_issue_print_vector(vec);
}
