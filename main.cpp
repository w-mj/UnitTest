#include "test.h"

class TestSomething: public Test {
public:
    TestSomething(): Test() {
        registerTest(TestSomething::testInt);
        registerTest(TestSomething::testFloat);
    }
    void testInt() {
        int aac = 1;
        int bbd = 3;
        assertEqual(   1 + 1   ,   bbd);
    }
    void testFloat() {
        float f1 = 3.14;
        float f2 = 3.14;
        assertEqual(f1, f2);
    }
};

int main() {
    TestSomething t;
    t.testAll();
}