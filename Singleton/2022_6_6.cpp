#define _CRT_SECURE_NO_WARNINGS 1


#include "Singleton.h"

//class HeapOnly
//{
//public:
//	static HeapOnly* GetInstance()
//	{
//		return new HeapOnly;
//	}
//	void Test()
//	{
//		cout << "I am Test" << endl;
//	}
//private:
//	HeapOnly() {}
//	HeapOnly(HeapOnly&) = delete;
//	HeapOnly& operator=(const HeapOnly&) = delete;
//};

//class HeapOnly
//{
//public:
//	void Test()
//	{
//		cout << "I am Test" << endl;
//	}
//private:
//	~HeapOnly();
//};

//class StackOnly
//{
//public:
//
//private:
//	void* operator new(size_t) {}
//};

class StackOnly
{
public:
	static StackOnly GetInstance()
	{
		return StackOnly();
	}
	
private:
	StackOnly() { cout << "StackOnly()" << endl; }
	
};
int main()
{
	////1.
	//cout<<Singleton::GetInstance().GetRandom()<<endl;
	////2.
	//Singleton& s = Singleton::GetInstance();
	//cout<<s.GetRandom()<<endl;	
	//1.
	//cout<<Singleton::GetInstance()->GetRandom()<<endl;
	////2/
	//static Singleton* s = Singleton::GetInstance();
	//cout << s->GetRandom() << endl;
	//不能用左值引用接收的原因  返回值是右值 得用右值引用接收
	//为什么函数返回值是右值  因为返回值是借助临时变量返回的拿不到地址
	//如果返回值是左值引用就能用左值引用接收	
	//HeapOnly ho1;//err
	//HeapOnly* ho = new HeapOnly;
	//ho->Test();

	StackOnly so_stack=StackOnly::GetInstance();
	//StackOnly so1(so_stack);
	//StackOnly so2=so_stack;
	//StackOnly* so_heap = new StackOnly;
	return 0;
}






