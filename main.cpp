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

TestClass Ts;  // �����ȫ�ֱ�������������Ĵ����� main ֮ǰִ��

int main()
{
        cout<<"main"<<endl;

        return 0;
}
