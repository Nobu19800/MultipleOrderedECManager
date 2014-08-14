
#include <iostream>
#include <rtm/Manager.h>


int main (int argc, char** argv)
{
  RTC::Manager* manager;
  manager = RTC::Manager::init(argc, argv);

  manager->activateManager();

  manager->runManager();

  return 0;
}
