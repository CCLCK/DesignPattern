#pragma once

#include <iostream>
#include <mutex>
using namespace std;

//class Singleton
//{
//public:
//	static Singleton& GetInstance()
//	{
//		return _instance;
//	}
//	int GetRandom()
//	{
//		return 30;
//	}
//private:
//	Singleton() {}
//	Singleton(Singleton&) = delete;
//	Singleton& operator=(const Singleton&) = delete;
//	static Singleton _instance;
//};
//
//Singleton Singleton::_instance;

//class Singleton
//{
//public:
//	static Singleton* GetInstance()
//	{
//		if (_instance == nullptr)
//		{
//			_mtx.lock();
//			if (_instance == nullptr)
//			{
//				_instance = new Singleton();
//			}
//			_mtx.unlock();
//		}
//		return _instance;
//	}
//	int GetRandom()
//	{
//		return 30;
//	}
//	class Clear
//	{
//	public:
//		~Clear()
//		{
//			cout << "ÊÍ·Å×ÊÔ´" << endl;
//			delete _instance;
//		}
//	};
//private:
//
//	static Clear _cle;
//
//	Singleton(){}
//	Singleton(Singleton&) = delete;
//	Singleton& operator=(const Singleton&) = delete;
//	static Singleton* _instance;
//	static mutex _mtx;
//	
//};
//Singleton* Singleton::_instance = nullptr;
//mutex Singleton::_mtx;
//Singleton::Clear _cle;


