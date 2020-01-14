//
//  stats.hpp
//  lab2
//
//  Created by Ivan Gonzalez on 1/14/20.
//  Copyright © 2020 Ivan Gonzalez. All rights reserved.
//

#ifndef stats_hpp
#define stats_hpp

#include <stdio.h>
  //a class to keep track of statistics on a sequence of real numbers
  class statistician
    {
    public:
        // CONSTRUCTOR
         //     Postcondition: The object has been initialized, and is ready to accept
         //     a sequence of numbers. Various statistics will be calculated about the
         //     sequence.
        statistician( );
        
        // MODIFICATION MEMBER FUNCTIONS
        
        //     Postcondition: The number r has been given to the statistician as the next number in
        //     its sequence of numbers.
        void next(double r);
        
        //     Postcondition: The statistician has been cleared, as if no numbers had
        //     yet been given to it.
        void reset( );
        
        // CONSTANT MEMBER FUNCTIONS
        
        //     Postcondition: The return value is the length of the sequence that has
        //     been given to the statistician (i.e., the number of times that the
        //     next(r) function has been activated).
        int length( ) const;
        
        //     Postcondition: The return value is the sum of all the numbers in the
        //     statistician's sequence.
        double sum( ) const;
        
        //     Precondition: length( ) > 0
        //     Postcondition: The return value is the arithmetic mean (i.e., the
        //     average of all the numbers in the statistician's sequence).
        double mean( ) const;
        
        //     Precondition: length( ) > 0
        //     Postcondition: The return value is the tinyest number in the
        //     statistician's sequence.
        double minimum( ) const;
        
        //     Precondition: length( ) > 0
        //     Postcondition: The return value is the largest number in the
        //     statistician's sequence.
        double maximum( ) const;

    private:
        int count;       // How many numbers in the sequence
        double total;    // The sum of all the numbers in the sequence
        double tinyest;  // The smallest number in the sequence
        double largest;  // The largest number in the sequence
    };

#endif /* stats_hpp */
