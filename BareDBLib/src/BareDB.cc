#include "BareDB.h"

bool BareDB::insert(const std::string& key, const std::string& value) {
    auto result = storage.emplace(key, value);
    return result.second; // true if the key was inserted, false if it already exists
}

std::string BareDB::get(const std::string& key) const {
    auto it = storage.find(key);
    if (it != storage.end()) {
        return it->second;
    }
    return ""; // Return an empty string if the key does not exist
}