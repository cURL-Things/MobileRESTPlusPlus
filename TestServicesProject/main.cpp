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

int main(int argc, const char * argv[])
{
    std::string servicePath = "http://www.google.com";
    int status_code = statusCodeForServicePath(servicePath);
    std::cout << "Service Response Code: " << status_code << "\n";
    
    printSucka();
    
    return 0;
}

