// 852. Peak Index in a Mountain Array(https://leetcode.com/problems/peak-index-in-a-mountain-array/description/)
//Time complexity - O(log(arr.length))
//TODO: not realized clearly & not solved
function peakIndexInMountainArray(arr) {
    let start = 0;
    let end = arr.length - 1;
    console.log(end);
    
    while (start < end) {
        //find mid & return mid index
        mid = Math.floor((start + end) / 2);
        console.log(mid);
        
        return mid;        
    }
};

console.log(peakIndexInMountainArray([0,1,0])); //1
console.log(peakIndexInMountainArray([0,2,1,0])); //1
console.log(peakIndexInMountainArray([0,10,5,0])); //1
console.log(peakIndexInMountainArray([3,4,5,1])); //2
