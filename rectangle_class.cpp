#include <iostream>
#include <string>
class rectangle{
private:
    double lenght;
    double width;
public:
    void set_length(double l){
        lenght=l;
    }
    void set_width(double w){
        width=w;
    }
    double calc_para(){
        return ((lenght+width)*2);
    }
    double calc_area(){
        return lenght*width;
    }
};
int main(){
    double para_rec;
    rectangle r1;
    r1.set_length(2.3);
    r1.set_width(1.2);
    para_rec=r1.calc_para();
    std::cout << para_rec << std::endl;
    std::cout << r1.calc_area() << std::endl;
    return 0;
}