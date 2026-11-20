#include <iostream>

class studentreport{
private:
    double mark_1;
    double mark_2;
    double mark_3;
public:
    void set_m1(double m){
        mark_1=m;
    }
    void set_m2(double m){
        mark_2=m;
    }
    void set_m3(double m){
        mark_3=m;
    }
    double calc_avg(){
        double class_avg=(mark_1+mark_2+mark_3)/3;
        return class_avg;
    }
    double total_marks(){
        double total=(mark_1+mark_2+mark_3);
        return total;
    }
};
int main(){
    studentreport s1;
    s1.set_m1(33);
    s1.set_m2(10);
    s1.set_m3(99);
    std::cout << s1.calc_avg() << std::endl;
    std::cout << s1.total_marks() << std::endl;
    return 0;
}