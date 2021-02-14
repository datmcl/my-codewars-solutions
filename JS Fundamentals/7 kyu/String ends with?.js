/* Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

Example:

solution('abc', 'bc') // returns true
solution('abc', 'd') // returns false
*/

function solution(str, ending){
    return str.slice(str.length - ending.length).includes(ending);
}

/* Edit: 
It's better to use built-in method:

function solution(str, ending){
    return str.endsWith(ending);
}
*/
