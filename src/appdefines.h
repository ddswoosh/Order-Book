#ifndef APPDEFINES_H
#define APPDEFINES_H

// Lib includes
// #include        "../lib/sqlite/sqlite3.c"

// Database connection settings
#define DB1     "database/orders.db"
#define UNIQUEID 1


// Order parameters
enum Direction {
    LONG,
    SHORT,
};

enum Type {
    MARKET,
    LIMIT,
    STOPLOSS,
};

enum Status {
    INIT,
    OPEN,
    CLOSEDFULL,    // Refers to filled amount
    CLOSEDPARTIAL, // Refers to filled amount
    CLOSEDNONE,    // Refers to filled amount
    FAILED,
};

class Database {
    private:
        // sqlite3* db;

    public:
        static Database& getInstance() {
            static Database instance;

            // if (instance.db == nullptr) {
                // sqlite3_open(DB1, &instance.db);
            // }
            return instance;
        }

        void closeConnection() {
            // if (db != nullptr) {
                // sqlite3_close(db);
                // db = nullptr;
            // }
        }
};

#endif 