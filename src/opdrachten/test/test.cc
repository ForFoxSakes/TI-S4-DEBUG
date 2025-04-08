#include <iostream>
#include <tinyxml2.h>

using namespace tinyxml2;
using namespace std;

// Klasse voor 'Light'
class Light {
public:
    string name;
    float x, y, z;
    float r, g, b;

    Light(string name, float x, float y, float z, float r, float g, float b)
        : name(name), x(x), y(y), z(z), r(r), g(g), b(b) {}

    void toXML(XMLElement* parent) {
        XMLElement* light = parent->InsertNewChildElement("light");
        light->SetAttribute("name", name.c_str());

        XMLElement* pose = light->InsertNewChildElement("pose");
        pose->SetText((to_string(x) + " " + to_string(y) + " " + to_string(z)).c_str());

        XMLElement* diffuse = light->InsertNewChildElement("diffuse");
        diffuse->SetText((to_string(r) + " " + to_string(g) + " " + to_string(b) + " 1").c_str());

        light->InsertNewChildElement("cast_shadows")->SetText("true");
    }
};

// Klasse voor 'Model'
class Model {
public:
    string name;
    float mass;

    Model(string name, float mass) : name(name), mass(mass) {}

    void toXML(XMLElement* parent) {
        XMLElement* model = parent->InsertNewChildElement("model");
        model->SetAttribute("name", name.c_str());

        XMLElement* inertial = model->InsertNewChildElement("inertial");
        inertial->InsertNewChildElement("mass")->SetText(to_string(mass).c_str());

        // Voeg hier meer eigenschappen toe afhankelijk van de vereisten
    }
};

// Klasse voor 'World'
class World {
public:
    string name;

    World(string name) : name(name) {}

    void toXML(XMLDocument& doc) {
        XMLElement* world = doc.NewElement("world");
        world->SetAttribute("name", name.c_str());
        doc.InsertEndChild(world);

        // Voeg hier plugins en andere wereldspecifieke elementen toe
    }
};

// Hoofdfunctie
int main() {
    XMLDocument doc;

    // Maak een nieuwe wereld
    World world("car_world");
    world.toXML(doc);

    // Voeg een licht toe
    Light light("sun", 0, 0, 10, 0.8, 0.8, 0.8);
    light.toXML(doc.RootElement());

    // Voeg een model toe
    Model model("submarine", 1.0);
    model.toXML(doc.RootElement());

    // Sla het bestand op als een XML-bestand
    doc.SaveFile("output.sdf");

    cout << "XML bestand gegenereerd!" << endl;
    return 0;
}
