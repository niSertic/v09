#include "app.h"
#include <set>
#include <algorithm> 

namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, size_t n)
	{
		size_t start = v.size();
		v.reserve(start + n);

		for (int i = 0; i < n; ++i)
		{
			v.push_back(i * i);
		}
	}

	void remove_element(std::vector<int>& v, size_t i)
	{
		if (i < v.size())
		{
			v.erase(v.begin() + i);
		}
	}

	void input_element(std::vector<std::string>& v, size_t i, const std::string& value)
	{
		if (i <= v.size())
		{
			v.insert(v.begin() + i, value);
		}
	}

	int list_nth_element(const std::list<int>& c, size_t n)
	{
		if (n >= c.size())
			throw std::out_of_range("Index out of range");

		return *std::next(c.begin(), n);
	}

	void list_sort_desc(std::list<int>& c)
	{
		c.sort(std::greater<int>());
	}

	unsigned unique_numbers(std::istream& is)
	{
		std::set<int> numbers;
		int x;
		while (is >> x)
		{
			numbers.insert(x);
		}
		return numbers.size();
	}


	word_frequency::word_frequency(std::istream& is)
	{
		std::string word;
		while (is >> word)
		{
			std::transform(word.begin(), word.end(), word.begin(), ::tolower);
			++words[word];
			
		}
	}

	unsigned word_frequency::count() const
	{
		return words.size();
	}

	unsigned word_frequency::frequency(const std::string& word) const
	{
		auto it = words.find(word);
		if (it == words.end())
			return 0;
		return it->second;
	}
}