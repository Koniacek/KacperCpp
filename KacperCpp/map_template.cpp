#include "map_template.h"

template <class key,class value>
void map_template<key, value>::Add(key k, value v)
{
	dictionary.insert(k, v);
}

template <class key, class value>
value* map_template<key,value>::Find(key k)
{
	return dictionary.at(k);
}

