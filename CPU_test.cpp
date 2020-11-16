#include <gtest/gtest.h>
#include "CPU.cpp"

using namespace std;

TEST(init, helloworld) {
    cout << "Hello, World" << endl;
}

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

