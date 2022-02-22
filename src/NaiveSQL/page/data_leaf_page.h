#pragma once

#include "page/variant_page.h"

#include <cassert>

template<typename Key>
class data_leaf_page : public variant_page
{
	static_assert(
		sizeof(block_header) + sizeof(Key) <= PAGE_OV_KEEP_SIZE,
		"Key size of data page is too large."
	);
public:
	using variant_page::variant_page;
	PAGE_FIELD_ACCESSER(Key, key, get_block(id).second);

	std::pair<int, data_leaf_page> split(int cur_id)
	{
		auto ret = variant_page::split(cur_id);
		return { ret.first,
			*reinterpret_cast<data_leaf_page*>(&ret.second)
		};
	}
};