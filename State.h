//
// Created by reut on 06/01/19.
//

#ifndef PROJ2_STATE_H
#define PROJ2_STATE_H

template <class T>
class State {
private:
    T state;
    double cost;
    State<T>* cameFrom;
    bool visited;
    double shortestPathVal;
public:
    State(T state, double cost,double shortestPath){
        this->state = state;
        this->visited = false;
        this->cost = cost;
        this->cameFrom = nullptr;
        this->shortestPathVal = shortestPath;
    }
    double getShortestPathVal(){
        return shortestPathVal;
    }

    T getState(){
        return this->state;
    }
    bool Equal(State* state1){
        return (this->state==state1->state);
    }
    void setCameFrom(State<T>* dad )    {
        this->cameFrom = dad;
    }
    void setVisited(){
        this->visited = true;
    }
    bool ifVisited(){
        return this->visited;
    }
    State<T>* getDad(){
        return this->cameFrom;
    }
    double getCost(){
        return this->cost;
    }
    void setShortestPathVal(double shortestPath) {
        shortestPathVal = shortestPath;
    }
    bool operator < (const State<T>* b){
        return shortestPathVal < b->getShortestPathVal();
    }

    bool operator > (State<T> b) const {
        return shortestPathVal > b.getShortestPathVal();
    }

    bool operator == (State<T>* b) {
        return shortestPathVal == b->getShortestPathVal();
    }

};


#endif //PROJ2_STATE_H
