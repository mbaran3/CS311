#include <iostream>
#include <vector>

class Delivery{

    public:

        Delivery();
        Delivery(std::string product, int quanity, int month);

        Delivery & operator ++();
        Delivery & operator ++(int dummy);
        Delivery & operator --();
        Delivery & operator --(int dummy);
        
        friend bool operator ==(const  Delivery& lhs, const  Delivery& rhs);
        friend std::ostream & operator <<(std::ostream & str, const Delivery& obj); 
        friend bool operator !=(const Delivery& lhs, const Delivery& rhs);

        std::string getName() const;
        int getQuantity() const;
        int getMonth() const;
        
        void setName(std::string newProduct);
        void setQuantity(int newQuantity);
        void setMonth(int newMonth);

        bool empty() const;

        std::string toString() const;

    private:

        bool _isEmpty;
        std::string _product;
        int _quantity;
        int _month;
        std::vector<std::string> _months = {"Jan", "Feb", "Mar", "Apr", "May", "Jun"
                                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };

};

bool operator !=(const  Delivery& lhs, const  Delivery& rhs);
bool operator ==(const  Delivery& lhs, const  Delivery& rhs);
std::ostream & operator << (std::ostream & str, const Delivery& obj)