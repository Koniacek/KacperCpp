#pragma once
#include <map>
using namespace std;

template <class key,class value>
class map_template
{
	map<key, value> dictionary;
public:
	void Add(key, value);
	value* Find(key);
	friend ostream& operator<<(ostream& out, const map_template& m_t)
	{
		for (value& v : m_t.dictionary)
		{
			out << v << endl;
		}
		return out;
	}
};

