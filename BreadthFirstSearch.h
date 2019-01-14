

#ifndef PROJ2_BREADTHFIRSTSEARCH_H
#define PROJ2_BREADTHFIRSTSEARCH_H

#include <list>
#include <algorithm>
#include "Searcher.h"
#include <iostream>

using namespace std;
template <class T>
class BreadthFirstSearch: public Searcher<T> {
private:
    int nodesEvaluated=0;
public:
    virtual vector<State<T>*> search (Searchable<T>* searchable);

    virtual int getNumberOfNodesEvaluated(){
        return this->nodesEvaluated;
    }
};


template<class T>
vector<State<T>*> BreadthFirstSearch<T>::search(Searchable<T> *searchable) {


    // Create a queue for BFS
    std::list<State<T>*> queue;
    //cout<<queue.size()<<endl;

    //vector<State<T>> close;
    State<T>* state = searchable->getInitialState();

    queue.push_back(state);
    state->setVisited();

    // 'i' will be used to get all adjacent
    // vertices of a vertex
    typename vector<State<T>*>::iterator i;

    while(!queue.empty())
    {

        // Dequeue a vertex from queue and print it
        state = queue.front();
        queue.pop_front();



        if(searchable->getGoalState()->Equal(state)){
            break;
        }
        this->nodesEvaluated++;
        // Get all adjacent vertices of the dequeued
        // vertex s. If a adjacent has not been visited,
        // then mark it visited and enqueue it
        vector<State<T>*> adj = searchable->getAllPossibleStates(state);
        for (i = adj.begin(); i != adj.end(); ++i)
        {
            State<T>* nei=(*i);
            if (!(nei->ifVisited()))
            {
                nei->setVisited();
                nei->setCameFrom(state);
                queue.push_back(nei);
            }
        }
    }
    //get the nodes from the goal to begin

    vector<State<T>*> returnVal;
    State<T>* currentState = searchable->getGoalState();
    State<T>* beginState = searchable->getInitialState();
    if(currentState->getDad()==NULL){
        return returnVal;
    }

    while (!beginState->Equal(currentState)){
        returnVal.push_back(currentState);
        currentState = currentState->getDad();
    }
    returnVal.push_back(searchable->getInitialState());

    std::reverse(returnVal.begin(),returnVal.end());

    //save number of nodes that evaluated
    //this->nodesEvaluated=returnVal.size();

    cout<<"bfs"<<endl;
    cout<<currentState->getShortestPathVal()<<endl;
    cout<<this->nodesEvaluated<<endl;
    return returnVal;



}


#endif //PROJ2_BREADTHFIRSTSEARCH_H