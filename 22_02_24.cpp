#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

using namespace std;

//电脑组装
class CPU
{
public:
	virtual void  calculate() = 0;
};
class VideoCard
{
public:
	virtual void  display() = 0;
};
class Memory
{
public:
	virtual void  storage() = 0;
};
class IntelCPU :public CPU
{
public:
	void calculate()
	{
		cout << "Intel的CPU正在运行" << endl;
	}
};
class IntelVideo :public VideoCard
{
public:
	void display()
	{
		cout << "Intel的显卡正在运行" << endl;
	}
};
class IntelMemory :public Memory
{
public:
	void storage()
	{
		cout << "Intel的内存条正在运行" << endl;
	}
};
class LenovoCPU :public CPU
{
public:
	void calculate()
	{
		cout << "Lenovo的CPU正在运行" << endl;
	}
};
class LenovoVideo :public VideoCard
{
public:
	void display()
	{
		cout << "Lenovo的显卡正在运行" << endl;
	}
};
class LenovoMemory :public Memory
{
public:
	void storage()
	{
		cout << "Lenovo的内存条正在运行" << endl;
	}
};
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU* m_cpu;
	VideoCard* m_vc;
	Memory* m_mem;
};
void test01()
{
	CPU* intelcpu = new IntelCPU;
	VideoCard* lenovovc = new LenovoVideo;
	Memory* intelmem = new IntelMemory;
	Computer* computer1 = new Computer(intelcpu, lenovovc, intelmem);
	computer1->work();
	delete computer1;
}
int main()
{
	test01();

	system("pause");
	return 0;
}




//虚析构和纯虚析构
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal构造函数调用" << endl;
//	}
//	/*virtual ~Animal()
//	{
//		cout << "Animal虚析构函数调用" << endl;
//	}*/
//	virtual ~Animal() = 0;
//	virtual void func() {};
//};
//Animal::~Animal()
//{
//	cout << "Animal纯虚析构函数调用" << endl;
//}
//class Cat : public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat有参构造函数调用" << endl;
//		m_Name = new string(name);
//	}
//	virtual void func()
//	{
//		cout << *m_Name << "猫在叫" << endl;
//	}
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat析构函数调用" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//	string* m_Name;
//};
//void test01()
//{
//	Animal* cat = new Cat("Tom");
//	cat->func();
//	delete cat;
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}