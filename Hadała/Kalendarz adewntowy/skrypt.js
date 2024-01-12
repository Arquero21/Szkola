const container = document.getElementById('container');
console.log(container);
const surprises = container.querySelectorAll('.surprise');
console.log(surprises)
const array = ['coś', 'coś2', 'coś3'];
let index = 0;
surprises.forEach(surprise => {
    const door = surprise.querySelector('.door');
    console.log(door);
});