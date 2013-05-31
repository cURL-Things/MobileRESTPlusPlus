//
//  MobileRESTPlusPlus.cpp
//  MobileRESTPlusPlus
//
//  Created by Ryan Sander on 5/31/13.
//  Copyright (c) 2013 Ryan Sander. All rights reserved.
//

#include "MobileRESTPlusPlus.h"

size_t write_data(void *buffer, size_t size, size_t nmemb, void *userp) {
    return NULL;
}

int statusCodeForServicePath(std::string servicePath) {
    
    CURL *curl;
    CURLcode curl_code;
    
    curl = curl_easy_init();
    curl_easy_setopt(curl, CURLOPT_URL, servicePath.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
    curl_code = curl_easy_perform(curl);
    
    int http_status_code = 0;
    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &http_status_code);
    
    return http_status_code;
    
}

void printSucka() {
    
    printf("ERC!!");
    
}