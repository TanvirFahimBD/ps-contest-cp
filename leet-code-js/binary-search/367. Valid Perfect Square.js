//linear approach - O(n)

function isPerfectSquare(num) {
    //loop till num
    let length = Math.ceil(num / 2);
    // console.log(length);
    
    for (let i = 1; i <= length; i++){
        //i sqr == num return true
        if (i*i == num) {
            return true;
        } else if (i == 1 && i*i==num) {
            return true;
        }
    }

    //return false
    return false;
};

console.log(isPerfectSquare(16));
console.log(isPerfectSquare(14));
console.log(isPerfectSquare(7));
console.log(isPerfectSquare(1));
// console.log(isPerfectSquare(0));
// console.log(isPerfectSquare(-16));

// console.log(Math.sqrt(16));
// console.log(Math.sqrt(2));
// console.log(Math.sqrt(1));
