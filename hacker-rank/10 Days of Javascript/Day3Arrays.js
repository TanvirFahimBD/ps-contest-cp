function getSecondLargest(nums) {
  let newArr = [];
  for (let i = 0; i < nums.length; i++) {
    if (newArr.indexOf(nums[i]) === -1) {
      newArr.push(nums[i]);
    }
  }
  console.log(newArr);
  //* String sorting
  //   newArr.sort();
  //? number sorting
  newArr.sort(function (a, b) {
    return a - b;
  });
  console.log(newArr);
  let secondLargest = newArr[newArr.length - 2];
  return secondLargest;
}

const nums = [43, -3, 65, 100, 3];
console.log(getSecondLargest(nums));
