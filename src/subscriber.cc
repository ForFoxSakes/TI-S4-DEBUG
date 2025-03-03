#include <iostream>
#include <string>
#include <gz/msgs.hh>
#include <gz/transport.hh>
#include <gz/msgs/altimeter.pb.h>

void cb(const gz::msgs::StringMsg &_msg)
{
    std::cout << "Msg: " << _msg.data() << std::endl << std::endl;
}

void OnALTIMessage(const gz::msgs::Altimeter &msg)
{
    std::cout << "Ontvangen Altimeter bericht:" << std::endl;
    std::cout << "  - Verticale positie: " << msg.vertical_position() << std::endl;
    std::cout << "  - Verticale snelheid: " << msg.vertical_velocity() << std::endl;
}

int main(int argc, char **argv)
{
    gz::transport::Node node;
    std::string topic = "alti";  
    std::cout << "Wachten op berichten op topic: " << topic << std::endl;

    // Subscribe naar de altimeter topic
    if (!node.Subscribe(topic, &OnALTIMessage))
    {
        std::cerr << "Fout bij het subscriben op topic [" << topic << "]" << std::endl;
        return -1;
    }

    // Houd het programma draaiende
    gz::transport::waitForShutdown();

    return 0;
}
