// �βκ;ֲ�������������һ���ģ�����ջ�Ͽ��ٵ��ڴ�ռ䣬�ں�������ʱ���ͷš�
// ֻ���βαȾֲ���������һ�����ã������ź����������뱻��������Ϣ���ݵĽӿڡ�
// �ֲ���̬�������βκ;ֲ�������ͬ���ǣ������ڶ��Ͽ��ٵ��ڴ棬
// �ֲ���̬����ֻ���ں�����һ�α�����ʱ�ű���ʼ����ͬʱ�ڳ������ʱ�ű��ͷš�

#include <iostream>

using namespace std;

int fact(int val)
{
	static unsigned count_calls = 0;
	++count_calls;
	
	int res = 1;
	while (val > 1)
	{
		res *= val;
		--val;
	}
	
	cout << "This function has been called " << count_calls << " times." << endl;
	
	return res;
}

int main()
{
	int val;
	while (cin >> val)
	{
		cout << "The fact of " << val << " is " << fact(val) << endl;
	}
	return 0;
}
