

#ifndef PROJ2_BESTFIRSTSEARCH_H
#define PROJ2_BESTFIRSTSEARCH_H

#include "Searcher.h"
#include "Searchable.h"
#include "MyPriorityQueue.h"
#include <unordered_map>
#include <string>
#include <algorithm>
#include <queue>
#include <unordered_set>

using namespace std;

template <class T>
class BestFirstSearch : public Searcher<T>{

    MyPriorityQueue<T>* openList;
    int nodesEvaluated=0;
    vector<State<T>*> path;
public:

    virtual int getNumberOfNodesEvaluated(){
        return this->nodesEvaluated;
    }

    virtual vector<State<T>*> search(Searchable<T> *searchable) {
        path.clear();

        this->openList = new MyPriorityQueue<T>();
        State<T>* start = searchable->getInitialState();
        this->openList->addToPqueue(start);
        start->setShortestPathVal(start->getCost());

        unordered_set<State<T>*> closed;
        typename unordered_set<State<T>*>::iterator itOnClosed;
        State<T>* goal = searchable->getGoalState();

        while (!this->openList->empty()) {

            State<T>* current = this->openList->popOutFromthePqueue();
            closed.insert(current);
            if (current == goal) {
                path.push_back(goal);
                while(goal->getDad()!= NULL){
                    State<T> *dadOfCurrent = goal->getDad();
                    path.push_back(dadOfCurrent);
                    goal = dadOfCurrent;
                }
                reverse(path.begin(),path.end());
                //cout<<path.size()<<endl;
                cout<<"best"<<endl;
                State<T>* bb =path.back();
                cout<<bb->getShortestPathVal()<<endl;
                cout<<this->nodesEvaluated<<endl;
                return path;
            }
            nodesEvaluated+=1;

            // typename list<State<T>*>::iterator iteratorOfSuccessors;
            vector<State<T>*> successors = searchable->getAllPossibleStates(current);
            typename vector<State<T>*>::iterator iteratorOfSuccessors;
            iteratorOfSuccessors = successors.begin();

            for (iteratorOfSuccessors;iteratorOfSuccessors!=successors.end();++iteratorOfSuccessors) {
                State<T> *it = (*iteratorOfSuccessors);

                double currentPath = current->getShortestPathVal() + it->getCost();
                itOnClosed = closed.find(it);

                if (itOnClosed ==closed.end() && !this->openList->isPqueueContains(it)) {
                    it->setCameFrom(current);
                    it->setShortestPathVal(currentPath);
                    this->openList->addToPqueue(it);
                } else if (currentPath < it->getCost()) {
                    if (!this->openList->isPqueueContains(it)) {
                        this->openList->addToPqueue(it);
                    } else {
                        this->openList->updatePqueuePriority(it,current);
                    }
                }
            }
        }
        path.push_back(goal);
        while(goal->getDad()!= NULL){
            State<T> *dadOfCurrent = goal->getDad();
            path.push_back(dadOfCurrent);
            goal = dadOfCurrent;
        }

        if(goal->getDad()==NULL){
            vector<State<T>*> returnVal;
            return returnVal;
        }

        reverse(path.begin(),path.end());
        cout<<"best"<<endl;
        cout<<path.back()->getShortestPathVal()<<endl;
        cout<<this->nodesEvaluated<<endl;
        return path;
    }

};

#endif //PROJ2_BESTFIRSTSEARCH_H

