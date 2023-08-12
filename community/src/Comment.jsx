import React from "react";
import { useState } from "react";
const Comment = () => {
  const [text, setText] = useState("");
  const [comment, setComment] = useState([]);

  const handleChange = (e) => {
    setText(e.target.value);
  };

  const handleSend = () => {
    const commentText = {
      reply: text,
    };
    setComment([...comment, commentText]);
  };

  //   const value = e.target.value;
  //     setText([...setText, value]);

  return (
    <>
      <div>
        <input onChange={handleChange} />
        <button onClick={handleSend}>Send</button>
        {comment.map((item) => {
          return <h1>{item.reply}</h1>;
        })}
      </div>
    </>
  );
};

export default Comment;
