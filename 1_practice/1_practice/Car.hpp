//
//  Car.hpp
//  1_practice
//
//  Created by 서희찬 on 2021/05/10.
//

#ifndef Car_hpp
#define Car_hpp

namespace CAR_CONST {
    enum
    {
            ID_LEN = 20, MAX_SPD=200, FUEL_STEP = 2,
        ACC_STEP =10, BRK_STEP=10
    };
}

class Car
{
private:
    char gamerID[CAR_CONST::ID_LEN];
    int fuelGauge;
    int curSpeed;
    
public:
    void InitMembers(char * ID, int fuel);
    void ShowCarState();
    void Accel();
    void Break();
};


#endif /* Car_hpp */
