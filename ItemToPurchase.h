#ifndef ITEM_TO_PURCHASE_H

#define ITEM_TO_PURCHASE_H

#include <string>

using namespace std;
class ItemToPurchase {
public:
    ItemToPurchase();
    void SetName(const string& name);
    string GetName() const;
    void SetPrice(int price);
    int GetPrice() const;
    void SetQuantity(int quantity);
    int GetQuantity() const;
private:
    string itemName;    // Initialized in default constructor to "none"
    int itemPrice;      // Initialized in default constructor to 0
    int itemQuantity;   // Initialized in default constructor to 0
};
#endif
