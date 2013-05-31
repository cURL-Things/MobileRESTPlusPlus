//
//  main.cpp
//  TestServicesProject
//
//  Created by Ryan Sander on 5/31/13.
//  Copyright (c) 2013 Ryan Sander. All rights reserved.
//

#include <iostream>
#include <string.h>
#include "MobileRESTPlusPlus.h"

int main(int argc, const char * argv[]) {
    
    std::cout << "Service Response Code: " << statusCodeForServicePath("http://www.google.com") << "\n";
    
    printSucka();
    
    return 0;
    
}

