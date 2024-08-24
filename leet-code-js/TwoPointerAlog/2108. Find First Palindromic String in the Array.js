//2108. Find First Palindromic String in the Array(https://leetcode.com/problems/find-first-palindromic-string-in-the-array/description/)

//TC - O(n^2) , SC - O(1)

function isPalindrome(str) { 
    let i = 0;
    let k = str.length - 1;
    while (i <= k) {        
        if (str[i] !== str[k]) {
            return false;
        }
        i++;
        k--;
    }
    return true;
}


function firstPalindrome(words) {
    let i = 0;
    let end = words.length-1;
    while (i <= end) {
        if (isPalindrome(words[i])) {           
            return words[i];
        }
        i++;
    } 
    return '';
};

console.log(firstPalindrome(["abc","car","ada","racecar","cool"])); //"ada"
console.log(firstPalindrome(["notapalindrome","racecar"])); //"racecar"
console.log(firstPalindrome(["def","ghi"])); //""
console.log(firstPalindrome(["xngla","e","itrn","y","s","pfp","rfd"])); //"e"
