# 微型C++单元测试框架

## 使用方法
```C++
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
        assertEqual(aac, bbd);
        assertEqual(aac, 1);
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
```
输出:
```
Running TestSomething::testFloat...Finish !
Running TestSomething::testInt...
TEST FAIL AT testInt:12:[ assertEqual(aac, bbd) ]
`aac` expects `3` but gets `1`
Finish !
All test cases finished! 2/3 asserts passed.
```