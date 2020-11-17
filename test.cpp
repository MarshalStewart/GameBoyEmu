#include <gtest/gtest.h>
#include "CPU.cpp"
#include "Memory.cpp"

using namespace std;

TEST(CPU, helloworld) {
    CPU cpu();
    cout << "Hello\n";
}

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

