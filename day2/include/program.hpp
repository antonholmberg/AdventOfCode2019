#ifndef PROGRAM_HPP
#define PROGRAM_HPP

#include <vector>

class Program {
	private:
		std::vector<int> const inputs;

	public:
		Program(std::vector<int> const& i) : inputs{i} {}
		~Program() = default;
};

#endif
