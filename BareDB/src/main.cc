#include <iostream>
#include "BareDB.h"
#include "calc/Calc.h"

int main() {
    BareDB db;

    // Manual testing
    db.insert("key1", "value1");
    std::cout << "key1: " << db.get("key1") << std::endl;

    db.insert("key2", "value2");
    std::cout << "key2: " << db.get("key2") << std::endl;

    // Attempt to overwrite key1
    if (!db.insert("key1", "new_value")) {
        std::cout << "Key 'key1' already exists with value: " << db.get("key1") << std::endl;
    }

    // Non-existent key
    std::cout << "nonexistent_key: " << db.get("nonexistent_key") << std::endl;

    return 0;
}
