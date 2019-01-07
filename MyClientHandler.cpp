//
// Created by reut on 03/01/19.
//

#include "MyClientHandler.h"

void MyClientHandler::handleClient(IStreamReader *input, OStreamWriter *output) {

    string solution;
    vector<vector<double>> info;
    info = setInformation(input);
    //the solution is saved already
    if(this->cm->IsSolutionSaved(info)){
        output->writeLine(this->cm->getSolution(info));
        return;
    }

    solution = solver->solve(info);
    //the solution isn't saved already
    this->cm->saveSolution(info,solution);
    output->writeLine(this->cm->getSolution(info));

}

vector<vector<double>> MyClientHandler::setInformation(IStreamReader *input) {
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
    return lexer(allLine);


}

vector<vector<double >> MyClientHandler:: lexer(string longString){

    vector<vector<double >> returnVal;
    vector<double > listOfterLex;
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
            listOfterLex.push_back(stod(enterTolist));
            longString = longString.substr(enterTolist.size(), longString.size());
            enterTolist = "";
        } else if ((longString[0] >= 65 && longString[0] <= 90) || (longString[0] >= 97 && longString[0] <= 122)) {
            //listOfterLex.push_back(longString);

        } else {
            enterTolist = "";
            //listOfterLex.clear();
            longString = longString.substr(1, longString.size());
        }
    }
    return returnVal;
}