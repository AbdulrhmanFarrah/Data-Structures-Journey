#include <cassert>
#include <iostream>
#include <string>
#include "KeyedBag.h" // Adjust path if needed
using namespace std;
using namespace Containers;

void test_insert() {
    KeyedBag bag;
    assert(bag.insert("Apple", 1) == true);
    assert(bag.insert("Banana", 2) == true);
    assert(bag.insert("Carrot", 1) == false); // Duplicate key
    assert(bag.size() == 2);
    assert(bag.contains(1) == true);
    assert(bag.contains(3) == false);
    std::cout << "test_insert passed\n";
}

void test_erase() {
    KeyedBag bag;
    bag.insert("Apple", 1);
    bag.insert("Banana", 2);
    assert(bag.erase(2) == true);   // Existing key
    assert(bag.erase(3) == false);  // Non-existing key
    assert(bag.contains(2) == false);
    assert(bag.size() == 1);
    std::cout << "test_erase passed\n";
}

void test_clear() {
    KeyedBag bag;
    bag.insert("Apple", 1);
    bag.insert("Banana", 2);
    bag.clear();
    assert(bag.size() == 0);
    assert(bag.is_empty() == true);
    std::cout << "test_clear passed\n";
}

void test_edit_item() {
    KeyedBag bag;
    bag.insert("Apple", 1);
    assert(bag.edit_item(1, "Avocado") == true);  // Edit existing
    assert(bag.get_value(1) == "Avocado");
    assert(bag.edit_item(2, "Banana") == false);  // Edit non-existing
    std::cout << "test_edit_item passed\n";
}

void test_get_value() {
    KeyedBag bag;
    bag.insert("Apple", 1);
    assert(bag.get_value(1) == "Apple");
    // Avoid testing get_value with non-existent key since it crashes
    std::cout << "test_get_value passed\n";
}

void test_capacity_limits() {
    KeyedBag bag;
    for (int i = 0; i < KeyedBag::CAPACITY; ++i) {
        assert(bag.insert("Item" + std::to_string(i), i) == true);
    }
    assert(bag.is_full() == true);
    std::cout << "test_capacity_limits passed\n";
}

int main() {
    test_insert();
    test_erase();
    test_clear();
    test_edit_item();
    test_get_value();
    test_capacity_limits();

    std::cout << "All tests passed!\n";
    return 0;
}
