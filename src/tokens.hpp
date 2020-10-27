#include <string>
#include "structs.hpp"
void Tokenize(const std::string& str, unsigned char& depthval);
bool ParseTokens(std::vector<std::pair<Page,unsigned char> >& pages, const bool& isconcise, unsigned char& depthval, unsigned long& bindcount);
enum Token_type {
	TERMINAL=0,
	NONTERMINAL,
	STRING
};
struct Token {
	Token_type type;
	std::string val;	
};