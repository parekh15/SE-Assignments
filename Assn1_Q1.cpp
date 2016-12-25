#include<iostream>

using namespace std;

class automobile
{
    public:
    string color;
    string interior;
    string manufacturer;
    int horsepower;
    int num_wheels;
    int num_steering;
    int num_headlights;
    int  max_speed;

    string direction = "North";
    int speed = 50;


    void modify(string colr, string intr, string mf, int hp, int nw, int ns, int nh, int ms)
    {
       color = colr;
       interior = intr;
       manufacturer = mf;
       horsepower = hp;
       num_wheels = nw;
       num_steering = ns;
       num_headlights = nh;
       max_speed = ms;
    }

    void change(string dir, int spd)
    {
        direction = dir;
        speed = spd;
    }

    void display()
    {
        cout<<"Color = "<<color<<endl;
        cout<<"Interior = "<<interior<<endl;
        cout<<"Manufacturer = "<<manufacturer<<endl;
        cout<<"Horsepower = "<<horsepower<<endl;
        cout<<"No. of wheels = "<<num_wheels<<endl;
        cout<<"No. of steering wheel = "<<num_steering<<endl;
        cout<<"No. of headlights = "<<num_headlights<<endl;
        cout<<"Maximum speed = "<<max_speed<<endl;
        cout<<"The car is moving in the "<<direction<<" direction at the speed of "<<speed<<" km/hr."<<endl;
    }
};


int main()
{
   automobile auto1, auto2;

   auto1.modify("White", "Leather", "Honda", 150, 4, 1, 2, 200);
   auto2.modify("Black", "Leather", "Honda", 140, 4, 1, 2, 200);

   auto1.change("West", 70);
   auto2.change("East", 60);

   cout<<"Current state of the automobile-1 is as follows:"<<endl;
   auto1.display();
   cout<<endl<<endl;
   cout<<"Current state of the automobile-2 is as follows:"<<endl;
   auto2.display();
}
