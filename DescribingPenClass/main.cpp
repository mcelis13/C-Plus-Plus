#include <iostream>
#include "ModifiedPen.h" /*This include the Pen class member variables and functions in the header file for this doc to access*/
#include "Pen.cpp" /*Include all source files in the main file or the application will not run*/

using namespace std;

int main()
{
    Pen FavoritePen; /*creating an instance of class Pen called Favorite Pen*/

    FavoritePen.Inkcolor = blue; /*assigning Instance FavoritePen its member variable values*/
    FavoritePen.ShellColor = grey;
    FavoritePen.CapColor = blue;
    FavoritePen.Style = ballpoint;
    FavoritePen.Length = 5.5;
    FavoritePen.Brand = "Office Depot";
    FavoritePen.InkLevelPercent = 30;

    Pen WorstPen;

    WorstPen.Inkcolor = red; /*We use these dots to access the member variables because STRINGS are a CLASS*/
    WorstPen.ShellColor = red;
    WorstPen.CapColor = black;
    WorstPen.Style = fountain_pen;
    WorstPen.Length = 5.0;
    WorstPen.Brand = "Parker";
    WorstPen.InkLevelPercent = 60;

    cout << "This is my favorite pen" << endl;
    cout << "Color: " << FavoritePen.Inkcolor << endl;
    cout << "Brand: " << FavoritePen.Brand << endl;
    cout << "Ink Level: " << FavoritePen.InkLevelPercent << "%" << endl;

    FavoritePen.write_on_paper("Hello I am a pen");
    cout << "InkLevel: " << FavoritePen.InkLevelPercent << "%" << endl;

    return 0;
}
