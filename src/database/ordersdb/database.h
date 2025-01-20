#ifndef DATABASE_H
#define DATABASE_H

// Header Includes
#include "../ordertypes/baseorder.h"

// Standard Includes
#include <vector>

class Database {
    private:
        static long uniqueId;
        static std::vector<Base> cache;
        // sqlite3* db;

        void populateCache();

    public:
        Database() { populateCache(); }

        void openConnection();
        void closeConnection();

        static Database& getInstance() {
            static Database instance;
            return instance;
        }
};

#endif