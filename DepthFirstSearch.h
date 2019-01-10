//
// Created by tehila on 10/01/19.
//

#ifndef PROJ2_DEPTHFIRSTSEARCH_H
#define PROJ2_DEPTHFIRSTSEARCH_H

#include<stack>

#include <list>
#include <algorithm>
#include "Searcher.h"


using namespace std;
template <class T>
class DepthFirstSearch: public Searcher<T> {
private:
    int nodesEvaluated=0;
public:
    virtual vector<State<T>*> search (Searchable<T>* searchable);

    virtual int getNumberOfNodesEvaluated(){
        return this->nodesEvaluated;
    }
};

template<class T>
vector<State<T>*> DepthFirstSearch<T>::search(Searchable<T> *searchable) {

    // create stack and save the goal and initialize state
    std::stack<State<T>*> stack;
    searchable->getGoalState();
    State<T>* current = searchable->getInitialState();
    State<T>* goal = searchable->getGoalState();

    // push the first to stack
    stack.push(current);

    typename vector<State<T> *>::iterator it;

    while (!stack.empty()) {
        //pop a vertex from stack
        current = stack.top();
        stack.pop();

        //if the current not mark as visited already-mark as visited
        if (!current->ifVisited()) {
            current->setVisited();
        }

        //if we reach the goal state -we done and exit
        if (current->Equal(goal)) {
            break;
        }

        vector<State<T> *> adj = searchable->getAllPossibleStates(current);
        it = adj.begin();
        //add the adj
        for (; it != adj.end(); ++it) {
            State<T> *node = (*it);
            if (!node->ifVisited()) {
                node->setVisited();
                node->setCameFrom(current);
                stack.push(node);
            }
        }
    }

    vector<State<T>*> vecNodes;
    State<T>* goalState = searchable->getGoalState();
    State<T>* beginState = searchable->getInitialState();
    while (!beginState->Equal(goalState)){
        vecNodes.push_back(goalState);
        goalState = goalState->getDad();
    }
    vecNodes.push_back(searchable->getInitialState());
    std::reverse(vecNodes.begin(),vecNodes.end());

    //save number of nodes that evaluated
    this->nodesEvaluated=vecNodes.size();

    return vecNodes;
}


#endif //PROJ2_DEPTHFIRSTSEARCH_H