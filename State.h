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
public:
    State(T state, double cost){
        this->state = state;
        this->visited = false;
        this->cost = cost;
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

};


#endif //PROJ2_STATE_H
