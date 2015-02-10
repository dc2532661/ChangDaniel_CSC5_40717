/* 
 * File:   Array.h
 * Author: Daniel
 *
 * Created on February 10, 2015, 8:34 AM
 */

#ifndef ARRAY_H
#define	ARRAY_H

class Array{
private:
    int *data;
    int *indx;
    int size;
public:
    void filAray(int);
    void prntAry(int);
    void destroy();
    void mrkSort();
};


#endif	/* ARRAY_H */

