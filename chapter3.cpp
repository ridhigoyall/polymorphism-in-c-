#include <iostream>
#include <cstring>
using namespace std;

class CWD
{
protected:
    string title;
    float rating;

public:
    CWD(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {}
};
class CWDVedio : public CWD
{
    float videoLength;

public:
    CWDVedio(string s, float r, float vl) : CWD(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Rating: " << rating << " out of 5 Stars" << endl;
        cout << "Length of this video " << videoLength << " Minutes " << endl;
    }
};
class CWDText : public CWD
{
    int words;

public:
    CWDText(string s, float r, int wd) : CWD(s, r)
    {
        words = wd;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Rating: " << rating << " out of 5 star" << endl;
        cout << "No. of words in this text tutorial is " << words << " Words" << endl;
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
    CWDVedio Djvideo(title, rating, vlen);
    // Django.display();

    // Text
    title = "Django tutorial text";
    words = 433;
    rating = 4.19;
    CWDText DjText(title, rating, words);
    // DjText.display();

    CWD *tuts[2];
    tuts[0] = &Djvideo;
    tuts[1] = &DjText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}