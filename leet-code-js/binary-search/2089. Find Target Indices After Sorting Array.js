function findIndices(nums, target) {
    let sortedNums = nums.sort((a,b) => a-b);
    console.log(sortedNums);
    
  let numIndices = [];

    for (let i = 0; i <= sortedNums.length - 1; i++){
        if (sortedNums[i] === target) {
            numIndices.push(i);
            console.log(numIndices);
            
        }
    }
    return numIndices;
};

console.log(findIndices([48,90,9,21,31,35,19,69,29,52,100,54,21,86,6,45,42,5,62,77,15,38], 6));
