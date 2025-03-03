#include <gz/transport/Node.hh>
#include <gz/msgs/twist.pb.h>
#include <chrono>
#include <thread>
#include <iostream>

int main()
{
    // Maak een transport node
    gz::transport::Node node;

    // Maak een publisher die berichten naar het "/cmd_vel" topic stuurt
    auto pub = node.Advertise<gz::msgs::Twist>("/cmd_vel");

    if (!pub)
    {
        std::cerr << "Kon publisher niet maken voor /cmd_vel" << std::endl;
        return -1;
    }

    std::cout << "Publisher gestart. Beweeg het object..." << std::endl;

    // Maak een Twist bericht
    gz::msgs::Twist msg;
    msg.mutable_linear()->set_x(-20.5); // Zet lineaire snelheid op x-as
    msg.mutable_angular()->set_z(0.0);  // Zet draaiing rond z-as op 0

    // Publiceer het bericht periodiek
    for (int i = 0; i < 10; ++i) // 10 iteraties
    {
        pub.Publish(msg);
        std::cout << "Bericht gepubliceerd: linear.x = " << msg.linear().x()
                  << ", angular.z = " << msg.angular().z() << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    return 0;
}
