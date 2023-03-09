function subtractProductAndSum(n: number): number {
    // initting return var
    let result: number = 0;

    // turn n into string
    // iterate through string, we don't need to modify!
    // push all digits to an array
    // multiply all items, save that
    // sum up all items, save that
    // subtract, save to result
    // return result

    // initting array of digits
    const digiArr: Array<number> = [];

    // grabbing each digit as an int, pushing them to digiArr
    for (let i = 0; i < n.toString().length; i++) {
        const element = n.toString()[i];
        digiArr.push(parseInt(element));
    }

    // initting product and sum vars
    let product: number = 1;
    let sum: number = 0;

    // multiplying all digits
    for (let i = 0; i < digiArr.length; i++) {
        const element = digiArr[i];
        product *= element;
    }

    // summing all digits
    for (let i = 0; i < digiArr.length; i++) {
        const element = digiArr[i];
        sum += element
    }

    // self explanatory
    result = product - sum;

    return result;
};

console.log(subtractProductAndSum(234));
console.log(subtractProductAndSum(4421));