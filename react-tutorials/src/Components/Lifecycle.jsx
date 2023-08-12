import React, { useState } from "react";
import Text from "./Text";

const Lifecycle = () => {
  const [show, setShow] = useState(false);
  const handleChange = () => {
    setShow(!show);
  };
  return (
    <>
      {" "}
      <div>Lifecycle</div>
      <button onClick={handleChange}>Show text</button>
      {show && <Text />}
    </>
  );
};

export default Lifecycle;
