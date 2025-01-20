#ifndef ORDERBASE_H
#define ORDERBASE_H

// Header Inlcudes
#include "../appdefines.h"

// Standard Includes
#include <string>

// QT Includes
// #include <QObject>


// Base structure for all order types
class Base {
    // Q_OBJECT
    private:
        // Setters 
        void setStatus();       
        void setTimeOpened();   
        void setTimeClosed();   
        void setFillQty();      
        void setFillPrice();   
        void setPnl();          
        void setSymbolPrice();  

    protected:
        Type type;
        Direction direction;
        Status status;
        time_t timeOpened;
        time_t timeClosed; 
        double requestQty;
        double fillQty;
        double fillPrice;
        double pnlDollars;
        double pnlPercent;
        double symbolPrice;
        std::string symbol;

    public:
        int id;

        Base(Type _type, Direction _direction, double _requestQty, std::string _symbol) 
        : type(_type), direction(_direction), status(INIT), requestQty(_requestQty), symbol(_symbol) {}
        virtual ~Base() {}

        // Do not allow copying or moving
        Base(Base& base)            = delete;
        Base(Base&& base)           = delete;
        void operator=(Base& base)  = delete;
        void operator=(Base&& base) = delete;

        // Order type specific implementations
        virtual bool addOrder(Direction, int)         = 0;
        virtual bool modifyOrder(Direction, int, int) = 0;
        
        bool deleteOrder(int);

        // Getters
        Type& getType()           { return type; }
        Direction& getDirection() { return direction;} 
        Status& getStatus()       { return status; }
        time_t& getTimeOpened()   { return timeOpened; }
        time_t& getTimeClosed()   { return timeClosed; }
        double& getRequestQty()   { return requestQty; }
        double& getFillQty()      { return  fillQty; }
        double& getFillPrice()    { return fillPrice; }
        double& getPnlDollars()   { return pnlDollars; }
        double& getPnlPercent()   { return pnlPercent; }
        double& getSymbolPrice()  { return symbolPrice; }
        std::string& getSymbol()  { return symbol; }

    // public signals:
        // void orderPlaced(const Base& order);


};

#endif