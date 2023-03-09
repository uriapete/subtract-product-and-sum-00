"use strict";
function subtractProductAndSum(n) {
    let result = 0;
    // turn n into string
    // iterate through string, we don't need to modify!
    // push all digits to an array
    // multiply all items, save that
    // sum up all items, save that
    // subtract, save to result
    // return result
    const digiArr = [];
    for (let i = 0; i < n.toString().length; i++) {
        const element = n.toString()[i];
        digiArr.push(parseInt(element));
    }
    let product = 1;
    let sum = 0;
    for (let i = 0; i < digiArr.length; i++) {
        const element = digiArr[i];
        product *= element;
    }
    for (let i = 0; i < digiArr.length; i++) {
        const element = digiArr[i];
        sum += element;
    }
    result = product - sum;
    return result;
}
;
console.log(subtractProductAndSum(234));
console.log(subtractProductAndSum(4421));
