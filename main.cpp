#include <iostream>
#include "datetime.h"
#include <memory>

#include <iomanip>

using namespace std;

int main()
{

   std::shared_ptr<DateTimeManager::Date > s(new DateTimeManager::Date(05,07,2020));

   std::cout << s->get_Date() << std::endl;

    return 0;
}
