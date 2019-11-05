/**
 * Lab 2.3.6 Postcard from Gizah
 * triod315, 1.11.2019
 */
#include <iostream>
using namespace std;

/**
 * Даний метод виводить вказану кількість пробілів в консоль
 * @param n кількість пробілів
 */
void writeSpace(int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<" ";
    }
}

/**
 * Виводить преший рядок піраміди - одну зірку по середині
 * @param h висота піраміди
 */
void writeFirstLine(int h)
{
    //виводимо пробіли до середини
    writeSpace(h-1);
    cout<<"*";
    //виводимо пробіли після середини
    writeSpace(h-1);
}

/**
 * Метод виводить останній рядок - всі зірки
 * @param h висота піраміди
 */
void writeEndLine(int h)
{
    for (int i=0;i<2*h-1;i++)
    {
        cout<<"*";
    }

}

/**
 * Виводить звичайний рядок де є дві зірки
 * @param i номер рядка, нумерація з 0!
 * @param h висота піраміди
 */
void writeStandardLine(int i, int h)
{
    //виводимо пробіли до ершої зірки
    writeSpace(h-i-1);

    cout<<"*";

    //виводимо пробіли між зірками
    writeSpace(2*i-1);
    cout<<"*";

    //виводимо пробіли після зірки
    writeSpace(h-i-1);
}


int main() {
    int h;

    cin>>h;

    int n=3; //кількість пірамід

    int emptySpaceBeg=(9-h)/2;//кількість пробілів - відступів перед пірамідою
    int emptySpaceEnd=9-h-emptySpaceBeg;//кількість пробілів - відступів після піраміди

    /**
     * Використовуючи визначені методи для виводу рядків та медод для виводу пробілів можна
     * фомувати "прямокутники" в яких знаходться піраміди
     * Перенесення рядка потрібно ротити тільки після виводу і-го рядка останньої піраміди
     */

    //виводимо перший рядок піраміди n раз
    for(int i=0;i<n;i++)
    {
        writeSpace(emptySpaceBeg);
        writeFirstLine(h);
        writeSpace(emptySpaceEnd);
    }
    cout<<endl;

    //Виводимо звичайні рядки піраміди
    for (int i=1;i<h-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            writeSpace(emptySpaceBeg);
            writeStandardLine(i,h);
            writeSpace(emptySpaceEnd);
        }
        cout<<endl;
    }

    //виводимо низ піраміди
    for (int i=0;i<n;i++)
    {
        writeSpace(emptySpaceBeg);
        writeEndLine(h);
        writeSpace(emptySpaceEnd);
    }
    cout<<endl;
    return 0;
}