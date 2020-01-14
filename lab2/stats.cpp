//
//  stats.cpp
//  lab2
//
//  Created by Ivan Gonzalez on 1/14/20.
//  Copyright © 2020 Ivan Gonzalez. All rights reserved.
//
//Header file Implementation
#include "stats.hpp"

statistician::statistician()
{
    count = 0;
    total = 0;
    tinyest = 0;
    largest = 0;
}
//Finds the smallest, largest, count, total
void statistician::next(double r)
{
    
    count+= 1;
    total += r;
    if (count == 1)
    {
        tinyest = r;
        largest = r;
    }
    else
    {
        if (tinyest > r)
            tinyest = r;
        if (largest < r)
            largest = r;
    }
    
}

//Resets everything to zero
void statistician::reset()
{
    count = 0;
    total = 0;
    tinyest = 0;
    largest = 0;
}

//Returns the count of times the next function has been trigered.
int statistician::length() const
{
    
    return count;
}

//Returns the total from the summation of all numbers
double statistician::sum() const
{
    return total;
}

//Returns the average from all the numbers
double statistician::mean() const
{
    if (count == 0)
        return 0;
    return (total / count);
}

//Returns the tinyest number from the sequence
double statistician::minimum() const
{
    return tinyest;
}

//Returns the largest number from the sequence
double statistician::maximum() const
{
    return largest;
}
