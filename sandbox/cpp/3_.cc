

#include <iostream>

#include <string>

#include <list>

#include <map>

#include <set>

#include <algorithm>





int main()

{

    int strCount = 0;

    std::cin >> strCount;

    std::list<std::string> inStrs;

    std::cin.ignore(256, '\n');

    //std::string tmp;

    //std::getline(std::cin, tmp);

    for(int i = 0; i < strCount; ++i){

        

        std::string inStr = "";

        std::getline(std::cin, inStr);

        inStrs.push_back(inStr);

    }

    std::list<std::string>::iterator it = inStrs.begin();

    while (it != inStrs.end())

    {   

        int sum = 0;

        size_t pos = it->find("a");

        if(pos == std::string::npos)

            sum+=-1;

        else

            sum+=pos;

        pos = it->find("is");

        if(pos == std::string::npos)

            sum+=-1;

        else

            sum+=pos;

        std::cout << sum << std::endl;

        ++it;

    }



    return 0;

}
