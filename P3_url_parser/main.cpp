#include <iostream>
#include <string>

int main() {

	std::cout << "Please enter a url: ";
	std::string input_url;
	std::cin >> input_url;
	int colon_marker = input_url.find(":");
	//int double_slash_marker = input_url.find("//");
	int single_slash_marker = input_url.find("/", colon_marker + 3);
	
	std::cout << "scheme = " + input_url.substr(0, colon_marker + 1) + "\n";
	std::cout << "authority = " + input_url.substr(colon_marker + 1,single_slash_marker - colon_marker - 1) + "\n";
	std::cout << "path = " + input_url.substr(single_slash_marker) + "\n";
	std::cout << "hello";
}