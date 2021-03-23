#ifndef PAGE_HPP
#define PAGE_HPP
#include <string>
#include <vector>
#include <deque>
#include "binds.hpp"
#include "compiler.hpp"
struct CommandMenu;
std::deque<Parser::MenuToken*>::iterator GetParentPageToken(const std::deque<Parser::MenuToken*>& cont, std::deque<Parser::MenuToken*>::iterator it, const unsigned char& age);
std::size_t GetParentPage(const std::deque<std::pair<CommandMenu, unsigned char> >& cont, std::size_t p_i, const unsigned char& age);
struct CommandMenu {
	std::string title;
	std::string formatted_title;
	std::vector<Bind> binds;

	CommandMenu();
	CommandMenu(const std::string& p_title);
	CommandMenu(const std::string& p_title, const std::string& p_ftitle);
	~CommandMenu();
};
#endif