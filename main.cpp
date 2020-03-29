#include "test.h"

int min(int a, int b) {
    if (a < b)
        return a;
    return b;
}

class TestSomething: public Test {
public:
    TestSomething(): Test() {
        registerTest(TestSomething::testInt);
        registerTest(TestSomething::testFloat);
        registerTest(TestSomething::testMin);
    }
    void testInt() {
        int aac = 1;
        int bbd = 3;
        assertEqual(aac, bbd);
        assertEqual(aac, 1);
    }
    void testFloat() {
        float f1 = 3.14;
        float f2 = 3.14;
        assertEqual(f1, f2);
    }
    void testMin() {
        assertEqual(min(1, 2), 2);
    }
};

int main() {
    TestSomething t;
    t.testAll();
}