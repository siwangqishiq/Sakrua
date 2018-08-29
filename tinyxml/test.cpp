#include <iostream>
#include "tinyxml.h"

int main(int argc , char *argv[]){
    TiXmlDocument doc;
    if(doc.LoadFile("school.xml")){
        doc.Print();
    }else{
        std::cout << "can not parse xml assets/school.xml" << std::endl;
    }
    return 0;
}


