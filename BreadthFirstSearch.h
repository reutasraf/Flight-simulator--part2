

#ifndef PROJ2_BREADTHFIRSTSEARCH_H
#define PROJ2_BREADTHFIRSTSEARCH_H

#include <list>
#include "Searcher.h"


template <class T>
class BreadthFirstSearch: public Searcher<T> {

    virtual string search (Searchable<T>* searchable);

    virtual int getNumberOfNodesEvaluated(){
        return 0;
    }
};


template<class T>
string BreadthFirstSearch<T>::search(Searchable<T> *searchable) {
    //bool *visited = new bool[V];
    //for(int i = 0; i < V; i++)
    //  visited[i] = false;

    // Create a queue for BFS
    list<State<T>> queue;
    //vector<State<T>> close;
    State<T> state = searchable->getInitialState();
    queue.push_back(state);
    state.setVisited();

    // 'i' will be used to get all adjacent
    // vertices of a vertex
    typename vector<State<T>>::iterator i;

    while(!queue.empty())
    {

        // Dequeue a vertex from queue and print it
        state = queue.front();
        queue.pop_front();

        if(searchable->getGoalState().Equal(state)){
            break;
        }
        // Get all adjacent vertices of the dequeued
        // vertex s. If a adjacent has not been visited,
        // then mark it visited and enqueue it
        vector<State<T>> adj = searchable->getAllPossibleStates(state);
        for (i = adj.begin(); i != adj.end(); ++i)
        {
            State<T> nei=(*i);
            if (nei.ifVisited())
            {
                nei.setVisited();
                nei.setCameFrom(&state);
                queue.push_back(nei);
            }
        }
    }
    vector<State<T>> returnVal;
    State<T> currentState = searchable->getGoalState();
    State<T> beginState = searchable->getInitialState();
    while (!beginState.Equal(currentState)){
        returnVal.insert(currentState);
        currentState = currentState.getDad();
    }



}



#endif //PROJ2_BREADTHFIRSTSEARCH_H
