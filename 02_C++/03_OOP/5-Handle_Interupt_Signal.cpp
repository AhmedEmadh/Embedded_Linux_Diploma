#include <csignal>
#include <iostream>

#include <thread>     // For std::this_thread::sleep_for (cross-platform)
#include <chrono>

void signal_handler(int signal)
{
    std::cout<<"Interupt Signal Called"<<std::endl;
}
int main()
{
    std::signal(SIGINT,signal_handler);
    while(true)
    {
        std::cout<<"Waiting for interupt signal"<<std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return 0;
}