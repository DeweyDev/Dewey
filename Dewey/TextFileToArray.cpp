#include "TextFileToArray.h"

TextFileToArray::TextFileToArray(string given, char delimgiven)
{
    path = given;
    delim = delimgiven;
    cout << "Locating file... " << path << endl;
}

TextFileToArray::TextFileToArray(string given)
{
    path = given;
    delim = '\n';
    cout << "Locating file... " << path <<endl;
}

void TextFileToArray::arrayfiller(string *givenpointer)
{

    cout<< "Recieved array pointer address" << givenpointer <<endl;

    const char * constantcharversion = path.c_str();
    ifstream filler(constantcharversion);

        if(filler){            /* CHECK TO SEE IF FILE EVEN EXISTS */

                string bunz;
                string lineoutliner = "Line ";
                string equalssign = " = ";
                int numbercounter = 1;
                while(!filler.eof())
                {

                        std::getline(filler, bunz, delim);
                        if(bunz.empty())
                        {
                                lineoutliner = "";
                                numbercounter = 0;
                                equalssign = "";
                        }
                        cout << lineoutliner  << numbercounter << equalssign << bunz <<endl;
                        cout<<""<<endl;
                        *givenpointer = bunz;
                        givenpointer++;
                        numbercounter++;


                }


                filler.close();
        }

}

void TextFileToArray::vectorfiller(vector<string>*givenpointer)
{



    const char * constantcharversion = path.c_str();
    ifstream filler(constantcharversion);

    string bunz;
    string lineoutliner = "Line ";
    string equalssign = " = ";
    int numbercounter = 1;
    while(!filler.eof())
    {

        std::getline(filler, bunz, ';');
        if(bunz.empty())
        {
            lineoutliner = "";
            numbercounter = 0;
            equalssign = "";
        }
        cout << lineoutliner  << numbercounter << equalssign << bunz <<endl;
        cout<<""<<endl;
        givenpointer->push_back(bunz);

        numbercounter++;


    }


    filler.close();


}
