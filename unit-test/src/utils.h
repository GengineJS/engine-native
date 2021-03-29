//
//  utils.h
//  CocosTest
//
//  Created by rosa on 2021/3/22.
//

#ifndef utils_h
#define utils_h
#include <math.h>
static std::string logLabel;
static bool IsEqualF(float l, float r) {
    const double esp = 1e-6;
    if(fabs(l - r) <= esp) {
        return true;
    }
    return false;
};
static void ExpectEq(bool lf, bool rt) {
    EXPECT_EQ(lf, rt) << "ERROR in: " <<logLabel;
}

#endif /* utils_h */
