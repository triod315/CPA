/**
 * CPA: Lab 6.3.1 Polymorphism: part 1
 * triod315, 21.10.2019
 */
#include <iostream>

using namespace std;

class Drawing
{
public:
    virtual void Draw()
    {
       printf(" /\\\n");
    };
};
class LineDraw : public Drawing
{
    void Draw() override
    {
        Drawing::Draw();

        printf("//\\\\\n");
    }
};
class StarDraw : public Drawing
{
    void Draw() override {
        Drawing::Draw();
        printf("/**\\\n");
    }
};
class PlusDraw : public Drawing
{
    void Draw() override
    {
        Drawing::Draw();
        printf("/++\\\n");
    }
};

int main()
{
    Drawing* drawLine = new LineDraw();
    drawLine->Draw();
    Drawing* starLine = new StarDraw();
    starLine->Draw();
    Drawing* plusLine = new PlusDraw();
    plusLine->Draw();

    return 0;
}