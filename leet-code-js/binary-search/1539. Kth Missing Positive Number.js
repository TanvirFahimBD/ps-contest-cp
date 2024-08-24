function kthMissingPos(arr, k) {   
    let ma = [];    
    let n = 1;
    let i = 0;
    while(true){
        if (arr[i] === n) {    
            // console.log(i);
            // console.log(arr[i]);
            // console.log(n); 
            n++;
            i++;           
        } else {               
            // console.log(i);
            // console.log(arr[i]);
            // console.log(n);
            ma.push(n);
            n++;
            if (ma.length >= k) break;
        }             
    }    
    // console.log(ma);
    return ma[k - 1];
}

// console.log(kthMissingPos([2,3,4,7,11], 5));  //9
console.log(kthMissingPos([1,2,3,4], 2)); //6
