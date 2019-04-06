#include "mapList.h"

MapList::MapList()
{
	m_messageList = new Map[]
	{
		Map{ "NumInput","•\¦‚·‚é”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F" },
	};
}

MapList::~MapList()
{
	delete m_messageList;
}

string MapList::operator[](string name)
{
	for (int quo = 0; quo < m_messageList[0].lengs; ++quo)
	{
		if (name == m_messageList[quo].s_messageName)
		{
			return m_messageList[quo].s_message;
		}
	}
	return "";
}