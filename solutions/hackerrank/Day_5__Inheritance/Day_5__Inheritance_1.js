// QUESTION URL: https://www.hackerrank.com/challenges/js10-inheritance/problem
// STATUS: Accepted



Rectangle.prototype.area = function() {
    return this.w * this.h;
};

class Square extends Rectangle {
    constructor(w){
        super(w, w);
    }
}

