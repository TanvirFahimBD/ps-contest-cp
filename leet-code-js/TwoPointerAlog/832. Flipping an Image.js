//flipping-an-image(https://leetcode.com/problems/flipping-an-image/)
//TC-O(n^2), SC-O(arr.length)
function flipAndInvertImage(image) {
    let i = 0;
    let iLength = image.length - 1;
    let newArr = [];
    while (i <= iLength) {
        // console.log(i);
        // console.log(image[i]);
        //reverse each row
        let j = 0;
        let jLength = (image[i].length) - 1;
        let tempArr = [];
        while (j <= jLength) {
            // console.log(j);
            // console.log(image[i][j]);
            if (image[i][j] === 1) {
                tempArr.push(0);
            } else {
                tempArr.push(1);
            }
            j++;
        }
        //invert
        let k = 0;
        let temp;
        let kLength = (tempArr.length) - 1;
        let mid = Math.floor((k+kLength)/2);
        for (; k <= mid; k++, kLength--) {
            // console.log(tempArr[k]);
            // console.log(tempArr[kLength]);
            temp = tempArr[k];
            tempArr[k] = tempArr[kLength];
            tempArr[kLength] = temp;
        }
        newArr.push(tempArr);
        i++;
    }
    // console.log(newArr);
    return newArr;
};

console.log(flipAndInvertImage([[1, 1, 0], [1, 0, 1], [0, 0, 0]])); //[[1,0,0],[0,1,0],[1,1,1]]
console.log(flipAndInvertImage([[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]])); //[[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]

