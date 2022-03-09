#define _CRT_SECURE_NO_WARNINGS 1

template<class T>
class MyArray
{
public:
	MyArray(int capacity)
	{
		//cout << "MyArray的有参构造调用" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
	MyArray(const MyArray& arr)
	{
		//cout << "MyArray的拷贝构造调用" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0;i < m_Size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	MyArray& operator=(const MyArray& arr)
	{
		//cout << "MyArray的operator=构造调用" << endl;
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		this->pAddress = new T[this->m_Capacity];
		this->m_Size = arr.m_Size;
		this->m_Capacity = arr.m_Capacity;
		for (int i = 0;i < m_Size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	void Push_Back(const T& val)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}
	void Pop_Back()
	{
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}
	T& operator[](int index)
	{
		return this->pAddress[index];
	}
	int getCapacity()
	{
		return this->m_Capacity;
	}
	int getSize()
	{
		return this->m_Size;
	}

	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			//cout << "MyArray的析构调用" << endl;
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}
private:
	T* pAddress;
	int m_Capacity;
	int m_Size;
};

class Person2
{
public:
	Person2() {};
	Person2(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};