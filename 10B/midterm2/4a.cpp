#include<iostream>
#include<vector>

int main() {
	std::vector<int> v {11, 22, 33, 44};
	for (int val : v) {
      		val += 1;
		std::cout << val << " ";
	}
	std::cout << "\n";
	
	for (int val : v) {
      		std::cout << val << " ";
	}
	std::cout << "\n";
}
