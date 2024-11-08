#include <iostream>

namespace jz {
namespace jpo {
    double abs(double number) {
        return (number > 0 ? number : -number);
    }
} // namespace jpo
} // namespace jz

using namespace std;
using namespace jz::jpo;

int main() {
    double d1 = 13.2;

    std::cout << "Using abs()" <<std::endl;
    double d2 = abs(d1);

    return 0;
}