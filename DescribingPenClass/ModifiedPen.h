#ifndef MODIFIEDPEN_H_INCLUDED
#define MODIFIEDPEN_H_INCLUDED


using namespace std;

enum Color /*use keyword enum to create new types-- This is the member variable Color which is being assigned values*/
{
    blue,
    red,
    black,
    clear,
    grey
}; /*this semicolon at the end of the function is extremely important and everytime you write a function in a header file you must end it with a semicolon!*/

enum PenStyle /*use enum to create new types when describing classes--This is the member variable PenStyle being assigned values*/
{
    ballpoint,
    felt_tip,
    fountain_pen,
}; /*Super important semicolor in header files*/

class Pen
{
public: /*These member variables can be accessed by all users because they are public
          To restrict user access to member variables or functions use protect or private instead*/
    Color Inkcolor; /*member variables of the class Pen are being declared here*/
    Color ShellColor;
    Color CapColor;
    PenStyle Style;
    float Length;
    string Brand;
    int InkLevelPercent;

    void write_on_paper(string words);
    void break_in_half();
    void run_out_of_ink();
};

#endif // MODIFIEDPEN_H_INCLUDED
