// Divisors of 42 are : 1, 2, 3, 6, 7, 14, 21, 42. These divisors squared are: 
// 1, 4, 9, 36, 49, 196, 441, 1764. The sum of the squared divisors is 2500 
// which is 50 * 50, a square!

// Given two integers m, n (1 <= m <= n) we want to find all integers between 
// m and n whose sum of squared divisors is itself a square. 42 is such a number.

// The result will be an array of arrays or of tuples (in C an array of Pair) 
// or a string, each subarray having two elements, first the number whose 
// squared divisors is a square and then the sum of the squared divisors.

// #Examples:

// list_squared(1, 250) --> [[1, 1], [42, 2500], [246, 84100]]
// list_squared(42, 250) --> [[42, 2500], [246, 84100]]
// The form of the examples may change according to the language, 
// see Example Tests: for more details.
//===============================================================================
function listSquared(m, n) {
    let finalArr = []
    for (m; m < n; m++) {
      let multiples = []
      for (let i = 1; i <= m; i++){
        if (m % i === 0) {
        multiples.push(i)
        }
      }
      for(let j = 0; j < multiples.length; j++){
        multiples[j] = multiples[j] * multiples[j]
      }
      
      const reducer = (accumulator, currentValue) => accumulator + currentValue;
      let sumOfMultiples = multiples.reduce(reducer);
      
      if (Math.sqrt(sumOfMultiples) - Math.floor(Math.sqrt(sumOfMultiples)) === 0){
      let subArr = [];
      subArr.push(m)
      subArr.push(sumOfMultiples)
      finalArr.push(subArr)
      }
    }
    return finalArr
  }
  console.log(listSquared(1, 250))
  console.log(listSquared(42, 250))
  console.log(listSquared(250, 500))