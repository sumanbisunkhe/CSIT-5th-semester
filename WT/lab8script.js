// // JavaScript Arrays
// var fruits = ["Apple", "Banana", "Mango"];
// console.log(fruits);
// console.log(fruits[0]);
// console.log(fruits[1]);

// // Adding elements to an array
// fruits.push("Orange");
// console.log(fruits);

// // Removing elements from an array
// fruits.pop();
// console.log(fruits);

// // Iterating elements of an array
// for (var i = 0; i < fruits.length; i++) {
//     console.log("Iterating array elements: " + fruits[i]);
// }

// //array length
// console.log("Array length: " + fruits.length);

// // Built-in Objects
// // // Window Object
// // alert("Hello, World!");
// // var name = prompt("Enter your name: ");
// // console.log("Name: "+name);

// // String Object
// var str = "Hello, World!";
// console.log("String length: " + str.length);
// console.log("String to uppercase: " + str.toUpperCase());
// console.log("String to lowercase: " + str.toLowerCase());


// function showAlert() {
//     alert("Hello, welcome to JavaScript!");
// }

// function showPrompt() {
//     var name = prompt("Enter your name: ");
//     if (name != null) {
//         document.getElementById("message").innerHTML = "Hello, " + name + "! Welcome.";
//     }
// }

// function showConfirm() {
//     var response = confirm("Do you want to continue?");
//     if (response == true) {
//         document.getElementById("message").innerHTML = "You have selected OK.";
//     } else {
//         document.getElementById("message").innerHTML = "You have selected Cancel.";
//     }
// }


// function showUrl() {
//     document.getElementById("message").innerHTML = "URL: " + window.location.href;
// }

// function redirectToGoogle() {
//     window.open("https://www.google.com", "_blank");
// }


// function showDate() {
//     var date = new Date();
//     document.getElementById("message").innerHTML = "Date: " + date;
// }


// function showTime() {
//     var date = new Date();
//     document.getElementById("message").innerHTML = "Time: " + date.getHours() + ":" + date.getMinutes() + ":" + date.getSeconds();
// }

// // startTimeOut with countdown

// var interval; // Declare interval globally

// function startTimeOut() {
//     var count = 10;
//     interval = setInterval(function () {  // Assign to the global variable
//         document.getElementById("message").innerHTML = "Countdown: " + count;
//         count--;
//         if (count < 0) {
//             clearInterval(interval);
//             document.getElementById("message").innerHTML = "Countdown is over!";
//         }
//     }, 1000);
// }

// function stopTimeOut() {
//     clearInterval(interval); // Now it correctly clears the interval
//     document.getElementById("message").innerHTML = "Countdown stopped!";
// }

// function startInterval() {
//     var count = 0;
//     interval = setInterval(function () {
//         document.getElementById("message").innerHTML = "Interval: " + count;
//         count++;
//     }, 1000);
// }

// function stopInterval() {
//     clearInterval(interval);
//     document.getElementById("message").innerHTML = "Interval stopped!";
// }


// //string objects in Js
// var str = "Hello, Bud!";
// console.log("String length: " + str.length);
// console.log("String to uppercase: " + str.toUpperCase());
// console.log("String to lowercase: " + str.toLowerCase());
// console.log("String index of 'Bud': " + str.indexOf("Bud"));
// console.log("String slice: " + str.slice(0, 5));
// console.log("String substring: " + str.substring(0, 5));
// console.log("String replace: " + str.replace("Bud", "Friend"));
// console.log("String split: " + str.split(", "));


// // Number objects in Js
// var num = 123.456;
// var num1 = 500
// console.log("Number to string: " + num.toString());
// console.log("Number to fixed: " + num.toFixed(2));
// console.log("Number to precision: " + num.toPrecision(4));
// console.log("Number to exponential: " + num.toExponential(2));
// console.log("Number to value: " + num.valueOf());
// console.log("Number to integer: " + parseInt(num));
// console.log(Number.isInteger(num)); // Check if the number is an integer
// console.log(Number.isSafeInteger(num1)); // Check if the number is a safe integer



// //Boolean objects in Js
// var bool = true;
// console.log("Boolean value: " + bool.toString());
// console.log("Boolean value: " + bool.valueOf());
// console.log("Boolean value: " + bool.toLocaleString()); 

// //Date objects in Js
// var date = new Date();
// console.log("Current date: " + date.toString());
// console.log("Current date: " + date.toDateString());
// console.log("Current date: " + date.toTimeString());
// console.log("Current date: " + date.toLocaleString());
// console.log("Current date: " + date.toUTCString());
// console.log("Current date: " + date.toISOString());
// console.log("Current date, Date: " + date.getDate());
// console.log("Current date, Day: " + date.getDay());
// console.log("Current date, Month: " + date.getMonth());
// console.log("Current date, Year: " + date.getFullYear());
// console.log("Current date, Hours: " + date.getHours());
// console.log("Current date, Minutes: " + date.getMinutes());
// console.log("Current date, Minutes: " + Date.now());


// //math objects in Js
// console.log("Math PI: " + Math.PI);
// console.log("Math E: " + Math.E);
// console.log("Math square root: " + Math.sqrt(16));
// console.log("Math power: " + Math.pow(2, 3));
// console.log("Math random: " + Math.random());
// console.log("Math round: " + Math.round(4.5));
// console.log("Math ceil: " + Math.ceil(4.2));
// console.log("Math floor: " + Math.floor(4.8));
// console.log("Math abs: " + Math.abs(-4.5));
// console.log("Math max: " + Math.max(1, 2, 3, 4, 5));
// console.log("Math min: " + Math.min(1, 2, 3, 4, 5));
// console.log("Math sin: " + Math.sin(Math.PI / 2));
// console.log("Math cos: " + Math.cos(Math.PI));



//         //change text of the paragraph
//         function changeText() {
//             document.getElementById("demo").innerHTML = "Hello, Bud!";
//         }

//         //change image attribute
//         function changeImage() {
//             document.getElementById("myImage").src = "/media/Annapurna Circuit Expedition.jpg";
//         }

//         //change style of the paragraph
//         function changeStyle() {
//             document.getElementById("demo").style.fontSize = "30px";
//             document.getElementById("demo").style.color = "red";
//         }

//         //change color of the paragraph
//         function changeColor() {
//             document.getElementById("demo").style.color = "blue";
//         }

//         //change font of the paragraph
//         function changeFont() {
//             document.getElementById("demo").style.fontFamily = "Courier New, Courier, monospace";
//         }
        
//         //add new element to the paragraph
//         function addElement() {
//             var newElement = document.createElement("p");
//             newElement.innerHTML = "This is a new paragraph.";
//             document.body.appendChild(newElement);
//         }

//         //remove element from the paragraph
//         var paragraph=document.getElementsByTagName("p");
//         if(paragraph.length > 0) {
//             document.body.removeChild(paragraph[paragraph.length - 1]); 
//         }

//         //event listener for button click
//         document.getElementById("myButton").addEventListener("click", function() {
//             alert("Button clicked!");
//         });
