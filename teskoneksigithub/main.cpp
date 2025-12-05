//
//  main.cpp
//  teskoneksigithub
//
//  Created by KHAIDIR MAULANA on 04/12/25.
//

#include <iostream>
#include "math_utils.h"

int main(int argc, const char * argv[]) {
    int a = 5;
    int b = 7;

    int hasil = tambah(a, b);

    std::cout << "Penjumlahan " << a << " + " << b << " = " << hasil << "\n";

    return EXIT_SUCCESS;
}

