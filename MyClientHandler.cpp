//
// Created by reut on 03/01/19.
//

#include "MyClientHandler.h"

void MyClientHandler::handleClient(IStreamReader *input, OStreamWriter *output) {

    string solution;
    string allLine;
    vector<vector<string>> info;
    allLine = setInformation(input);
    string toLex = allLine;
    replace(allLine.begin(),allLine.end(),'\n','$');
    //the solution is saved already
    if(allLine.back()=='$'){
        allLine.pop_back();
    }

    if(this->cm->IsSolutionSaved(allLine)){
        output->writeLine(this->cm->getSolution(allLine));
        return;
    }
    info=this->lexer(toLex);
    solution = solver->solve(info);
    //the solution isn't saved already

    this->cm->saveSolution(allLine,solution);


    output->writeLine(this->cm->getSolution(allLine));


}

string MyClientHandler::setInformation(IStreamReader *input) {
    vector<vector<double>> info;
    string line;
    string solution;
    string allLine;
    bool continueLoop = true;
    while(continueLoop){
        line =input->getLine();
        allLine = allLine+line;
        if(line.find("end") !=std::string::npos){
            continueLoop = false;
        }
    }
    return allLine;


}

vector<vector<string >> MyClientHandler:: lexer(string longString){

    vector<vector<string >> returnVal;
    vector<string > listOfterLex;
    string enterTolist = "";
    regex number("[0-9.]*");
    smatch m;
    while(longString.size()>0) {
        if (longString[0] == '\n') {
            longString = longString.substr(1, longString.size());
            returnVal.push_back(listOfterLex);
            enterTolist = "";
            listOfterLex.clear();
        } else if (longString[0] >= 48 && longString[0] < 58) {
            regex_search(longString, m, number);
            for (unsigned i = 0; i < m.size(); ++i) {
                enterTolist += enterTolist + m.str(i);
            }
            listOfterLex.push_back(enterTolist);
            longString = longString.substr(enterTolist.size(), longString.size());
            enterTolist = "";
        } else if ((longString[0] >= 65 && longString[0] <= 90) || (longString[0] >= 97 && longString[0] <= 122)) {
            //listOfterLex.push_back(longString);
            return  returnVal;
        } else {
            enterTolist = "";
            //listOfterLex.clear();
            longString = longString.substr(1, longString.size());
        }
    }
    return returnVal;
}