//
// Created by reut on 09/01/19.
//

#ifndef PROJ2_INDEXSMAT_H
#define PROJ2_INDEXSMAT_H


class IndexsMat {
public:
    void setRow(int row) {
        IndexsMat::row = row;
    }

    void setColumn(int column) {
        IndexsMat::column = column;
    }

private:
    int row;
    int column;
public:
    /*IndexsMat(int i,int j){
        this->column = i;
        this->row = j;
    }*/
    int getColumn(){
        return this->column;
    }
    int getRow(){
        return this->row;
    }

};


#endif //PROJ2_INDEXSMAT_H
