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
        Market(Direction dir, int qty, std::string symbol) 
        : Base(MARKET, dir, qty, symbol) {}
        ~Market() override {}
        
        bool addOrder(Direction dir, int qty) override;
        bool modifyOrder(Direction dir, int id, int qty) override;


};

#endif