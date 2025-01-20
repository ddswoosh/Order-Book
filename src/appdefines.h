#ifndef APPDEFINES_H
#define APPDEFINES_H

// Lib includes
// #include        "../lib/sqlite/sqlite3.c"

// Database connection settings
#define DB1     "database/orders.db"

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

#endif 