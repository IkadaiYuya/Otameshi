#pragma once
#include <iostream>
#include <string>
using namespace std;

static class MapList
{
	//--------------------------------------
	//--------------struct------------------
	
	struct Map
	{
		string s_messageName;
		string s_message;
		static int lengs;
	};

	//--------------------------------------
	//---------------menber-----------------
	
	static Map *m_messageList;
	
	//--------------------------------------
	//---------------method-----------------
	
	//
	MapList();
	//
	~MapList();
	//
	string operator[](string name);
};