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
    /**
     *
     * @return the shortest path value
     */
    double getShortestPathVal(){
        return shortestPathVal;
    }
/**
 * get the state.
 * @return
 */
    T getState(){
        return this->state;
    }
    /**
     *
     * @param state1
     * @return true if they are tha same states
     */
    bool Equal(State* state1){
        return (this->state==state1->state);
    }
    /**
     * set the state we came from(the "father")
     * @param dad
     */
    void setCameFrom(State<T>* dad )    {
        this->cameFrom = dad;
    }
    /**
     * set the state to know we visit it
     */
    void setVisited(){
        this->visited = true;
    }
    /**
     *
     * @return true if we visit already
     */
    bool ifVisited(){
        return this->visited;
    }
    /**
     * return the state we came from(the "father")
     * @return
     */
    State<T>* getDad(){
        return this->cameFrom;
    }
    /**
     * get the cost of the state
     * @return
     */
    double getCost(){
        return this->cost;
    }
    /**
     * set the shortest path
     * @param shortestPath
     */
    void setShortestPathVal(double shortestPath) {
        shortestPathVal = shortestPath;
    }

    /**
    * operator <check if the shortest path value small the the shortest path value we get
    * @param b state
    * @return true if small
    */
    bool operator < (const State<T>* b){
        return shortestPathVal < b->getShortestPathVal();
    }

 /**
 * operator >check if the shortest path value big the the shortest path value we get
 * @param b state
 * @return true if big
 */
    bool operator > (State<T> b) const {
        return shortestPathVal > b.getShortestPathVal();
    }
/**
 * operator== check if the shortest path value equals
 * @param b state
 * @return true if tey equal
 */
    bool operator == (State<T>* b) {
        return shortestPathVal == b->getShortestPathVal();
    }

};


#endif //PROJ2_STATE_H
