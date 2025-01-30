# Dangling Pointer with std::vector Resizing
This example demonstrates a common error in C++ when dealing with `std::vector` and raw pointers.  The code initially creates a vector, gets a raw pointer to its data, and then accesses elements using that pointer. After resizing the vector, accessing the elements via the raw pointer can lead to undefined behavior because the underlying memory might have been reallocated.

**How to reproduce:**
1. Compile and run the `bug.cpp` file.
2. Observe the initial correct output.
3. Observe the incorrect or undefined behavior after resizing the vector and attempting to access the data using the raw pointer.

**Solution:**
The `bugSolution.cpp` file shows how to correctly iterate through the elements of the vector, using iterators or accessing elements using the `[]` operator after checking the bounds.

**Key takeaway:** Avoid using raw pointers with dynamically sized containers like `std::vector` unless you have a very strong reason. Always use iterators or access elements via the `[]` operator with proper boundary checks to maintain correctness and safety.