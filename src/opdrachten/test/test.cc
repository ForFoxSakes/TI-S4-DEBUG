#include <iostream>
#include <sdf/sdf.hh>

int main() {
    // Maak een nieuw SDF object
    sdf::SDFPtr sdf(new sdf::SDF());

    // Root element is altijd een <sdf> tag
    sdf::ElementPtr root = sdf->Root();

    // Voeg een wereld toe
    sdf::ElementPtr worldElem = root->AddElement("world");
    worldElem->AddAttribute("name", "default");

    // Voeg een lichtbron toe
    sdf::ElementPtr lightElem = worldElem->AddElement("light");
    lightElem->AddAttribute("name", "sun");
    sdf::ElementPtr pose = lightElem->AddElement("pose");
    pose->Set<std::string>("0 0 10 0 0 0");
    sdf::ElementPtr diffuse = lightElem->AddElement("diffuse");
    diffuse->Set<std::string>("1 1 1 1");
    lightElem->AddElement("cast_shadows")->Set<bool>(true);

    // Voeg een model toe
    sdf::ElementPtr modelElem = worldElem->AddElement("model");
    modelElem->AddAttribute("name", "robot");
    sdf::ElementPtr link = modelElem->AddElement("link");
    link->AddAttribute("name", "base_link");
    sdf::ElementPtr inertial = link->AddElement("inertial");
    sdf::ElementPtr mass = inertial->AddElement("mass");
    mass->Set<double>(1.0);

    // Schrijf naar een bestand
    sdf->Write("output.sdf");

    std::cout << "SDF bestand succesvol gegenereerd!" << std::endl;
    return 0;
}
