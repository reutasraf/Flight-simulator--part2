//
// Created by reut on 09/01/19.
//

#ifndef PROJ2_INDEXSMAT_H
#define PROJ2_INDEXSMAT_H

/**
 * the i,j that represent the location  in the natrix
 */
class IndexsMat {
private:
    int row;
    int column;
public:
    void setRow(int row) {
        IndexsMat::row = row;
    }

    void setColumn(int column) {
        IndexsMat::column = column;
    }

    int getColumn(){
        return this->column;
    }
    int getRow(){
        return this->row;
    }
    /**
     * check if it the same location(i,j equal)
     * @param indexsMat
     * @return
     */
    bool operator==(IndexsMat indexsMat) {
        return row == indexsMat.getRow() && column == indexsMat.getColumn();
    }

};


#endif //PROJ2_INDEXSMAT_H
