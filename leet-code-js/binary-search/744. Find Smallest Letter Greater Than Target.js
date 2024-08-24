//bruteforce approach - O(n)
// function nextGreatestLetter(letters, target) {

//     //greater check
//     //into greater first one return
//     for (let i = 0; i < letters.length; i++){
//         if (target < letters[i]) {
//             return letters[i];
//         }
//     }
    
//     // console.log('return here');
    
//     //no greater found return first one
//     return letters[0];
    
// };

// console.log(nextGreatestLetter(["c","f","j"], "a")); //c
// console.log(nextGreatestLetter(["c","f","j"], "c")); //f
// console.log(nextGreatestLetter(["x","x","y","y"], "z")); //x
// console.log(nextGreatestLetter(["c","f","j"], "d")); //"f"
// console.log(nextGreatestLetter(["c","f","j"], "g")); //"j"

// TODO: Fix error Time Limit Exceeded (https://leetcode.com/problems/find-smallest-letter-greater-than-target/description/)
//binary search approach - O(log(n))
// function nextGreatestLetter(letters, target) {
//     let start = 0;
//     let end = letters.length - 1;
//     let mid;

//     while (end >= start) {
//         mid = Math.floor((start + end) / 2);        
//         //target check by mid
//         if (letters[mid] === target) {            
//         // if target find loop next diff element & return
//             for (let i = mid + 1; i <= letters.length - 1; i++) {
//                 if (letters[i] > target) {                   
//                     return letters[i];
//                 }
//             }            
//         } else if (letters[mid] > target) {
//             end = mid - 1;            
//         } else {
//             start = mid + 1;
//         }
//     }     
        
//     //not found return first arr element
//     return letters[0];
    
// };

// console.log(nextGreatestLetter(["c","f","j"], "a")); //c
// console.log(nextGreatestLetter(["c","f","j"], "c")); //f
// console.log(nextGreatestLetter(["x","x","y","y"], "z")); //x
// console.log(nextGreatestLetter(["c","f","j"], "d")); //"f"
// console.log(nextGreatestLetter(["c","f","j"], "g")); //"j"


  