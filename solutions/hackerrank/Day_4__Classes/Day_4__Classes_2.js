// QUESTION URL: https://www.hackerrank.com/challenges/js10-class/problem
// STATUS: Accepted

/*
 * Implement a Polygon class with the following properties:
 * 1. A constructor that takes an array of integer side lengths.
 * 2. A 'perimeter' method that returns the sum of the Polygon's side lengths.
 */

class Polygon {
    constructor(array){
        this.array = array;
    }
    
    perimeter() {
        let total = 0;
        for (let i=0; i<this.array.length; i++){
            total += this.array[i];
        }
        return total;
    }
    
}

