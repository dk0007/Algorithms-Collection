#include <iostream>
#include <algorithm>
#include <vector>

bool myfunction(int i,int j) { return i<j; }

// desc @ https://rosettacode.org/wiki/Binary_search
int main()
{
  int myints[] = {1,2,3,4,5,4,3,2,1};
  std::vector<int> v(myints,myints+9);
  std::sort(v.begin(), v.end());
  std::cout << "looking for a 3... ";
  if (std::binary_search(v.begin(), v.end(), 3))
  {
    std::cout << "found!\n";
  }
  else
  {
  	std::cout << "not found.\n";
  }
  std::sort(v.begin(), v.end(), myfunction);
  std::cout << "looking for a 6... ";
  if (std::binary_search(v.begin(), v.end(), 6, myfunction))
  {
    std::cout << "found!\n";
  }
  else
  {
  	std::cout << "not found.\n";
  }
  // expected output
	// looking for a 3... found!
	// looking for a 6... not found.
  return 0;
}
