std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

// Correct way to access elements:
for (int i = 0; i < vec.size(); ++i) {
  std::cout << vec[i] << " ";
}
std::cout << std::endl;

// Or using iterators:
for (int x : vec) {
  std::cout << x << " ";
}
std::cout << std::endl;

vec.push_back(10);

// Accessing elements after resizing using correct methods:
for (int i = 0; i < vec.size(); ++i) {
  std::cout << vec[i] << " ";
}
std::cout << std::endl;

// Using iterators after resizing:
for (int x : vec) {
  std::cout << x << " ";
}
std::cout << std::endl;