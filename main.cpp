#include <Iostream>
using namespace std;

class TestClass
{
        public:
                TestClass();
};

TestClass::TestClass()
{
        cout<<"TestClass"<<endl;
}

TestClass Ts;  // 定义个全局变量，让类里面的代码在 main 之前执行

int main()
{
        cout<<"main"<<endl;

        return 0;
}
