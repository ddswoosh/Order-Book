#ifndef MARKETORDER_H
#define MARKETORDER_H

// Header Inlcudes
#include "../../appdefines.h"
#include "../baseorder.h"

// Standard Includes
#include <string>


class Market : public Base {
    private:
     
        
    public:
        Market(Direction dir, int qty) : Base(MARKET, dir, INIT, qty) {}

        bool addOrder(Direction dir, int qty) override;
        bool modifyOrder(Direction dir, int id, int qty) override;

        std::string getSymbol() { return symbol; }
        double getSymbolPrice() { return symbolPrice; }

};

#endif