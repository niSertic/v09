#pragma once
#include <vector>
#include <string>
#include <list>
#include <iostream>
#include <map>

namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, size_t n);
	void remove_element(std::vector<int>& v, size_t i);
	void input_element(std::vector<std::string>& v, size_t i, const std::string& value);
	int list_nth_element(const std::list<int>& c, size_t n);
	void list_sort_desc(std::list<int>& c);
	unsigned unique_numbers(std::istream& is);

	class word_frequency
	{
		std::map<std::string, unsigned> words;

	public:
		word_frequency(std::istream& is);

		unsigned count() const;
		unsigned frequency(const std::string& word) const;
	};
}