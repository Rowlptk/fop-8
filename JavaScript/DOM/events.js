// document.querySelector('.clear-tasks').addEventListener('click', function(e){
//     console.log('Button is clicked!');
//     console.log(e);
//     e.preventDefault();
// })

document.querySelector('.clear-tasks').addEventListener('click', onClick);


function onClick(e) {


    let val;
    val = e;
    val = e.type;
    val = e.target;
    val = e.target.id;
    val = e.target.className;
    val = e.target.classList;
    val = e.timeStamp;
    val = e.clientX;
    val = e.clientY;
    val = e.OffsetY;
    val = e.offsetX;

    console.log(val);

    e.preventDefault();
}

// click, dblclik, mouseenter, mouseleave, mousemove, mousewheel
// keyup, keydown, keypress
// focus, blur, submit etc etc

const card = document.querySelector('.card');
const heading = document.querySelector('#task-title');

card.addEventListener('mousemove', runEvent);

function runEvent(e) {
    heading.textContent = `MouseX : ${e.offsetX} MouseY: ${e.offsetY}`;
    document.body.style.backgroundColor = `rgb(${e.offsetX}, ${e.offsetY}, 120)`;
}

// Event Deligation
// Next day
// Bootstrap




// Next app 