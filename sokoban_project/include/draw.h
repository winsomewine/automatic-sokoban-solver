#pragma once

#include "game_node.h"

class draw_picture {
private:
	void draw_pic(std::vector<std::vector<char>>& matrix);

	point get_end(game_node& first, game_node& second);

	std::vector<game_node> get_complete(const std::vector<game_node>& input);

	char symbols[7];

public:

	draw_picture();
	void draw(std::vector<game_node>& ss);
};