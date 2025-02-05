// Header Includes
#include "baseorder.h"
#include "cachereader.h"

// Standard Includes
#include <chrono>

void Base::setStatus() {
    // TODO
}

void Base::setTimeOpened() {
    auto now = std::chrono::system_clock::now();
    timeOpened = std::chrono::system_clock::to_time_t(now);
}

void Base::setTimeClosed() {
    switch (status) {
        case CLOSEDFULL:
        case CLOSEDPARTIAL:
        case CLOSEDNONE:
        case FAILED:
            auto now = std::chrono::system_clock::now();
            timeClosed = std::chrono::system_clock::to_time_t(now);
            break;
        default:
            break;
    }
}

void Base::setFillQty() {
    // Take diff of requested quantity vs filled
}

void Base::setFillPrice() {
    switch (status) {
        case CLOSEDFULL:
        case CLOSEDPARTIAL:
            // Get data from python api
        default:
            break;
    }
}

void Base::setPnl() {
    // Get data from python api
    // pnlDollar = api data * qty filled - fillprice * qty files
    // pnlPercent = 100 - fillprice / apidata
}

void Base::setSymbolPrice() {
    
}

bool Base::deleteOrder(int id) {

}