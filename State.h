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
    State(T state){
        this->state = state;
        this->visited = false;
    }
    bool Equal(State state1){
        return (this->state==state1.state);
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
    State<T> getDad(){
        return this->cameFrom;
    }

};


#endif //PROJ2_STATE_H
