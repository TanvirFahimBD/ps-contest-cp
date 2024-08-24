function reverseString(s) {
  try {
    if (typeof s === "string") {
      //? reverse in JS
      s = s.split("").reverse().join("");
      console.log(s);
    }
  } catch (e) {
    console.log(e);
    console.log(s);
  }
}

reverseString(Number(1234));
