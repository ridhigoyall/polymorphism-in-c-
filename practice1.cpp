#include <iostream>
using namespace std;
class BaseClass
{
protected:
    string title;
    float rating;

public:
    BaseClass(string t, float r)
    {
        title = t;
        rating = r;
    }
    virtual void display(){};
};
class DerivedVideo : public BaseClass
{
    float videolength;

public:
    DerivedVideo(string t, float r, float vl) : BaseClass(t, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "The title of the video is " << title << endl;
        cout << "Rating: " << rating << " out of 5 stars" << endl;
        cout << "The length of the video is " << videolength << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;
    // Videos
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    DerivedVideo Djvideo(title, rating, vlen);
    // Django.display();
    return 0;
}