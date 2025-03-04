### STL = Standard Template Library

Standard library heeft veel overgenomen vanuit de STL. Zijn wel twee aparte dingen maar er komt veel overéén.

Lambda zijn Anonieme functies;
het is een alternatief op closures.
`````
struct{
    int center;
    bool operator()(int x, int y) const {
        return abs(x-center) < abs(y-center)
    }
} comp = {10}
std::sort(x.begin(),x.end(),comp);
std::for_each(x.begin(),x.end(),printer);

`````

Met closures kan je buiten deze struct nog wel de center aanroepen.
Met Lambda's kan je dit wat makkelijker maken

`````

std::sort(x.begin(),x.end(), [=](int x, int y){return abs(x - center) <abs(y- center);});comp);
std::for_each(x.begin(),x.end(),printer);

`````
struct wordt vervangen met functie body