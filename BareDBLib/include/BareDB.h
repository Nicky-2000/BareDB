#ifndef BAREDB_H
#define BAREDB_H

#include <unordered_map>
#include <string>

class BareDB
{
private:
    std::unordered_map<std::string, std::string> storage;

public:
    // Insert a key-value pair. Returns false if the key already exists.
    bool insert(const std::string &key, const std::string &value);

    // Retrieve the value associated with a key. Returns an empty string if the key does not exist.
    std::string get(const std::string &key) const;
};

#endif // BAREDB_H
