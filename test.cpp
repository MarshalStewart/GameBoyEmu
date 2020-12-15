#include <gtest/gtest.h>
#include <iostream>
#include <memory>

#include "CPU.cpp"

using namespace std;

#define MEM_ALLOC_DEBUG
#ifdef MEM_ALLOC_DEBUG
static size_t Total_Mem_Alloc = 0;

void *operator new(size_t size)
{
//    printf("Allocated %lu bytes\n", size);
    Total_Mem_Alloc += size;
    return malloc(size);
}

void operator delete(void *p, size_t size)
{
//    printf("Deallocated %lu bytes\n", size);
    Total_Mem_Alloc -= size;
    free(p);
}

void Print_Mem_Alloc() {
    printf("There are bytes %lu allocated\n", Total_Mem_Alloc);
}

#endif // MEM_ALLOC_DEBUG


TEST(CPU, Initialization) {
    std::cout << "Memory Before Test\n";
    Print_Mem_Alloc();
    CPU cpu; // init
    cpu.Execute();
    std::cout << "Memory After Test\n";
    Print_Mem_Alloc();

}

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

