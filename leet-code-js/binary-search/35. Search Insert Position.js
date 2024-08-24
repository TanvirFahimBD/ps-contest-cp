//35. Search Insert Position(https://leetcode.com/problems/search-insert-position/description/)
//Time complexity - O(n)

// function searchInsert(nums, target) {
//     let end = nums.length - 1;
//     let i = 0;
//     // end < target
//     while (i <= end) {
//         console.log(i);
        
//         // arr[i]=target return i
//         if (nums[i] == target) {
//             return i;
//         }
//         // arr[i]>target return i
//         else if (nums[i] > target) {
//             return i;
//         }
//         // else if (nums[i] < target) {
//         //     return i;
//         // }
//         i++;
//     }
//     return i;
// };

// console.log(searchInsert([1,3,5,6], 5)); //2
// console.log(searchInsert([1,3,5,6], 2)); //1
// console.log(searchInsert([1,3,5,6], 7)); //1
// console.log(searchInsert([1], 0)); //0


//TODO: Time complexity - O(logn)
