//
// Created by reut on 02/01/19.
//

#ifndef PROJ2_FILECHACHMANAGER_H
#define PROJ2_FILECHACHMANAGER_H

#include <unordered_map>
#include "ChachManager.h"
#include <unordered_map>
#include <fstream>
#define FILE_NAME "fileCache"
using namespace std;
template <class P,class S>
class FileCacheManager: public ChachManager<P,S> {

private:
    pthread_mutex_t mutex;
    unordered_map<P,S> mapSolution;
public:
    FileCacheManager(){
        this->loadFile();
        pthread_mutex_init(&mutex, nullptr);
    }
    void loadFile();
    virtual bool IsSolutionSaved(P p);
    virtual S getSolution(P p);
    virtual void saveSolution(P p,S s);
    void writeToFile();
    ~FileCacheManager(){
        writeToFile();
    }
};

template<class P, class S>
bool FileCacheManager<P, S>::IsSolutionSaved(P p) {
    pthread_mutex_lock(&mutex);
    if(mapSolution.size()==0){
        pthread_mutex_unlock(&mutex);
        return false;
    }
    if(mapSolution.count(p) > 0){
        pthread_mutex_unlock(&mutex);
        return true;

    }else {
        pthread_mutex_unlock(&mutex);
        return false;
    }

}

template<class P, class S>
S FileCacheManager<P, S>::getSolution(P p) {
    if(this->IsSolutionSaved(p)){
        return (this->mapSolution).at(p);
    } else{
        return NULL;
    }
}

template<class P, class S>
void FileCacheManager<P, S>::saveSolution(P p, S s) {

    pthread_mutex_lock(&mutex);
    this->mapSolution.insert(pair<P,S>(p,s));
    pthread_mutex_unlock(&mutex);

}

template<class P, class S>
void FileCacheManager<P, S>::loadFile() {

    fstream table;
    table.open(FILE_NAME, fstream::in | fstream::out | fstream::app);
    if (table.fail()) {
        throw "Failed in opening file";
    }
    if(!table.eof()) {
        string line;
        while (getline(table, line)) {
            size_t pos = line.find("end$");
            string problem = line.substr(0, pos+3);
            string solution = line.substr(pos + 4, line.length() - 1);
            this->mapSolution.insert(pair<P,S>(problem,solution));
        }
    }

}

template<class P, class S>
void FileCacheManager<P, S>::writeToFile() {

    fstream table;
    table.open(FILE_NAME, std::ofstream::out | std::ofstream::trunc);
    // TODO each problem and solution need toString!!
    for ( auto it = mapSolution.begin(); it != mapSolution.end(); ++it ){
        table << (it->first)<< "$";
        table << (it->second) << endl;
    }
    table.close();
}



#endif //PROJ2_FILECHACHMANAGER_H
