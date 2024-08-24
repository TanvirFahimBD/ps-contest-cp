//167. Two Sum II - Input Array Is Sorted(https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)
//TC-, SC-

function twoSum (numbers, target) {
    let low = 0;
    let high = numbers.length - 1;
    while (low <= high) {
        if (numbers[low] + numbers[high] > target) {
            high--;
        }
        else if (numbers[low] + numbers[high] < target) {
            low++;
        }
        else {
            return [low + 1, high + 1];
        }
    }

    return [];
   
};

console.log(twoSum([2,7,11,15], 9)); //[1,2]
console.log(twoSum([-1,0], -1)); //[1,2]
console.log(twoSum([5,25,75], 100)); //[2,3]