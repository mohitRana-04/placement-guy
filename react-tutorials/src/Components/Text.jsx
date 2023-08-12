import React, { useState } from "react";

const Text = () => {
  const [name, setName] = useState("");
  const handleChange = (e) => {
    setName(e.target.value);
  };
  return (
    <div>
      <input onChange={handleChange} />
      {name}
    </div>
  );
};

export default Text;
