#include<iostream>
#include<fstream>
#include<string>
#include"functions.h"
#include"XMLFile.h"
using namespace std;

int main() {

    string s;

    while(true) {
        cin >> s;
    }

    return 0;



    XMLFile file01;
    file01.openFile("example.xml");
    return 0;

    XMLFile file;

    bool weHaveEnteredExit = false;
    string command;

    while (!weHaveEnteredExit) {
        cin >> command;
        if (command == "open") {
            string openedPath;
            cin >> openedPath;
            file.openFile(openedPath);
        }
        else if (command == "close") {
            file.closeFile();
        }
        else if (command == "save") {
            file.saveFile();
        }
        else if (command == "save_as") {
            file.saveAsFile();
        }
        else if (command == "help") {
            file.help();
        }
     
        else if (command == "print") {
            file.printXML();
        }
        else if (command == "select") {
            file.selectAttribute();
        }
        else if (command == "set") {
            file.setAttribute();
        }
        else if (command == "children") {
            file.childrenList();
        }
        else if (command == "child") {
            file.printChild();
        }
        else if (command == "text") {
            file.printElementText();
        }
        else if (command == "delete") {
            file.deleteAttribute();
        }
        else if (command == "newchild") {
            file.newChild();
        }
        else if (command == "xpath") {
            file.xpath();
        }
        else if (command == "exit") {
            weHaveEnteredExit = true;
        }
        else {
            cout << "Unknown command " << command << endl;
        }
        cout << endl;
    }
    return 0;
}