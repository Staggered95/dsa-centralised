#include <algorithm>
#include <array>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    std::reverse(arr.begin(), arr.end());
    return 0;
}