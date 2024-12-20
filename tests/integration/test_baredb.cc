#include <gtest/gtest.h>
#include "BareDB.h"

// Test inserting and retrieving values
TEST(BareDBTest, InsertAndRetrieve)
{
    BareDB db;
    EXPECT_TRUE(db.insert("key1", "value1"));
    EXPECT_EQ(db.get("key1"), "value1");

    EXPECT_TRUE(db.insert("key2", "value2"));
    EXPECT_EQ(db.get("key2"), "value2");

    EXPECT_FALSE(db.insert("key1", "value3")); // Duplicate key should fail
    EXPECT_EQ(db.get("key1"), "value1");       // Original value remains
}

// Test retrieving non-existent keys
TEST(BareDBTest, RetrieveNonExistentKey)
{
    BareDB db;
    EXPECT_EQ(db.get("nonexistent_key"), "");
}
